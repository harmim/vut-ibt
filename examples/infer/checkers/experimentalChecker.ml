open! IStd
module F = Format
module L = Logging
module Domain = ExperimentalCheckerDomain
module Interval = ExperimentalCheckerDomain.Interval

(* Boilerplate to write/read our summaries alongside the summaries of other analyzers *)
module Payload = SummaryPayload.Make (struct
  type t = Domain.astate

  let update_payloads experimental_payload (payloads : Payloads.t) =
    {payloads with experimental= Some experimental_payload}


  let of_payloads (payloads : Payloads.t) = payloads.experimental
end)

type extras = FormalMap.t

module TransferFunctions (CFG : ProcCfg.S) = struct
  module CFG = CFG
  module Domain = Domain

  type nonrec extras = extras

  (* Take an abstract state and instruction, produce a new abstract state *)
  let exec_instr (astate: Domain.astate) {ProcData.pdesc; tenv} _ (instr: Sil.instr) =
   let rec get_value : Exp.t -> Interval.t = function
   | Exp.Const const -> 
     let value = Domain.get_int_from_exp const in      
     Interval.fromInt value
   | Exp.Var ident ->
     let find_ident : Ident.t -> Pvar.t =
       fun ident ->
         Domain.TemporaryLocals.find ident astate.tmp_locals
     in 
     fst (Domain.Locals.find (find_ident ident) astate.locals)
   | Exp.UnOp (unary_operator,exp,_) ->
    (
      match unary_operator with
      | Neg ->          
        Interval.negate (get_value exp)
      | _ -> 
        L.die InternalError "Unexpected unary operator!"
     )
   | _ -> 
     L.die InternalError "Unexpected operand in expression!"
   in
   match instr with
     | Declare_locals (locals, loc) -> 
       (
         let varMap = List.fold ~init:astate.locals ~f:(fun acc local -> 
           let variable = fst local in
           Domain.Locals.add variable (Interval.zero, loc) acc) locals in 
         {astate with locals = varMap} 
       )
     | Store (lexp, _, rexp, loc) ->
       (
         match rexp with
         | Exp.BinOp (binary_operator,operand1, operand2) ->
           let operation : Binop.t -> Interval.t -> Interval.t -> Interval.t =
             fun binary_operator operand1 operand2 ->
               match binary_operator with
               | Binop.PlusA -> 
                 Interval.plus operand1 operand2
               | Binop.MinusA -> 
                 Interval.minus operand1 operand2
               | Binop.Mult -> 
                 Interval.mult operand1 operand2
               | Binop.Div -> (*int_div*)
                 Interval.div operand1 operand2
               | Binop.Mod -> 
                 Interval.modulo operand1 operand2
               | _ -> 
                 L.die InternalError "Unsupported binary operation!"
           in

           let rec process_operand : Exp.t -> Interval.t = 
             fun x ->
               match x with
               | Exp.BinOp (binary_operator,operand1,operand2)-> 
                 let itv1 = process_operand operand1 in
                 let itv2 = process_operand operand2 in
                 let value = operation binary_operator itv1 itv2 in
                 value;
               | _ ->
                 let itv = get_value x in
                 itv          
           in
           let itv = process_operand rexp in
           (
             match lexp with
             | Lvar pvar ->
               let local = (itv, loc) in
               let oldLocal = Domain.Locals.find pvar astate.locals in (* Find old variable in the map *)
               let oldItv = fst oldLocal in 
               if (phys_equal (Interval.inBounds oldItv Domain.bounds) false) then
               (
                 (* Variable was already out of bounds, remember the location of bounds violation *)
                 astate
               )
               else
               (
                 (* Return astate with updated locals *) 
                 let newLocals = 
                    Domain.Locals.add pvar local astate.locals 
                 in (* add function updates the old binding *)
                 {astate with locals = newLocals}
               )
             | _ -> 
               astate
           )
         | Exp.Const const ->
         (
           match lexp with
           | Lvar pvar ->
             let itv = Interval.fromInt (Domain.get_int_from_exp const) in
             let local = (itv, loc) in
             let new_local =
               Domain.Locals.add pvar local astate.locals
             in
             {astate with locals = new_local}
           | _ -> 
             astate
         )
         | Exp.Var _ | Exp.UnOp _ ->
           (
             match lexp with 
             | Lvar pvar ->
               let value = ((get_value rexp),loc) in
               let new_local =
                 Domain.Locals.add pvar value astate.locals
               in
               {astate with locals = new_local}
             | _ ->
               astate
           )
         | _ -> 
           astate
       )
     | Load (ident,exp,_,_) ->
       (
         match exp with 
         | Lvar pvar ->
           let new_tmp_local =
             Domain.TemporaryLocals.add ident pvar astate.tmp_locals
           in
           {astate with tmp_locals = new_tmp_local}      
         | _ -> 
           astate
       )
     | Call (retvar, Const Cfun callee_pname, arg, loc, _) ->
      (
        match Summary.read_summary pdesc callee_pname with
        | Some summary -> 
          {astate with callCount = astate.callCount + summary + 1}
        | None -> 
          {astate with callCount = astate.callCount + 1}
      )
     | _ ->
      
      L.stdout "%a\n" (Sil.pp_instr(Pp.text)) instr;      
      astate
end

module Analyzer = AbstractInterpreter.Make (ProcCfg.Normal) (TransferFunctions)

let checker {Callbacks.summary; proc_desc; tenv} : Summary.t =
  let pname = Procdesc.get_proc_name proc_desc in
  let pname_string = Typ.Procname.to_string pname in
  L.stdout "Analyzed procedure: %s\n" pname_string;
  let report varMap (proc_data: extras ProcData.t) =
   Domain.Locals.iter (fun k v ->
     let itv = fst v in
     let lastLoc = snd v in  (* location of last variable modification *)
     if Pervasives.not (Interval.inBounds itv Domain.bounds) then
     (
       let message = F.asprintf "interval: %s\tvariable %s = %s" (Interval.toString Domain.bounds) (Pvar.to_string k) (Interval.toString itv) in
       let exn = Exceptions.Checkers ("VARIABLE OUT OF BOUNDS", Localise.verbatim_desc message) in
       Reporting.log_warning summary ~loc:lastLoc exn
     )
   )varMap;   
  in
  let convert_to_summary (post: Domain.astate) : Domain.summary =
    post.callCount
  in
  let extras = FormalMap.make proc_desc in
  let proc_data = ProcData.make proc_desc tenv extras in
  match Analyzer.compute_post proc_data ~initial:ExperimentalCheckerDomain.initial with
  | Some post -> 
     (* Print total number of function calls *)
     (*L.stdout "Function calls: %d\n" post.callCount;*)
     Domain.Locals.iter(
        fun k v ->
          L.stdout " %s -> %s\n" (Pvar.to_string k) (Interval.toString (fst v))
      ) post.locals;
     report post.locals proc_data ;
     Payload.update_summary (convert_to_summary post) summary
  | None -> 
   L.(die InternalError)
     "Analyzer failed to compute post for %a" Typ.Procname.pp
     (Procdesc.get_proc_name proc_data.pdesc)

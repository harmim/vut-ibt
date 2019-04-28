open! IStd
module F = Format
module L = Logging
module Domain = PrintCheckerDomain

module Payload = SummaryPayload.Make (struct
  type t = Domain.astate

  let update_payloads resources_payload (payloads : Payloads.t) =
    {payloads with resources= Some resources_payload}

  let of_payloads (payloads : Payloads.t) = payloads.resources
end)

type extras = FormalMap.t

module TransferFunctions (CFG : ProcCfg.S) = struct
  module CFG = CFG
  module Domain = Domain

  type nonrec extras = extras

  let exec_instr (astate : Domain.astate) {ProcData.pdesc} _ (instr : HilInstr.t) =
    match instr with
    | Call (_, Direct callee_pname, actuals, _, loc) ->
      (* if (phys_equal (String.compare (Typ.Procname.to_string callee_pname) "pthread_mutex_lock") 0) then
      (
        F.printf "PrintChecker: Lock function call %s at line %a\n" 
          (Typ.Procname.to_string callee_pname) Location.pp loc;
        astate
      )
      else 
        astate *)
      (* (
        match ConcurrencyModels.get_lock callee_pname actuals with
        | ConcurrencyModels.NoEffect ->
          F.printf "PrintChecker: Lock function call %s at line %a\n\n" 
            (Typ.Procname.to_string callee_pname) Location.pp loc;
          astate
        | _ ->
          astate
      ) *)
      (
        match Ondemand.analyze_proc_name ~caller_pdesc:pdesc callee_pname with
        | Some summary ->
          if (Summary.Status.is_analyzed summary.status) then
          (
            F.printf "PrintChecker: library function call %s at line %a\n" 
            (Typ.Procname.to_string callee_pname) Location.pp loc;
            astate
          )
          else
          (
            F.printf "PrintChecker: non-library function call %s at line %a\n" 
            (Typ.Procname.to_string callee_pname) Location.pp loc;
            astate
          )
        | None ->
          F.printf "PrintChecker: library function call %s at line %a\n" 
          (Typ.Procname.to_string callee_pname) Location.pp loc;
          astate
      )
       (* F.printf "PrintChecker: call %s at line %a\n" (Typ.Procname.to_string callee_pname) Location.pp loc; *)
       (* astate *)
    | _ ->
      astate

  let pp_session_name _ fmt = F.pp_print_string fmt "Print checker"
end

module Analyzer = LowerHil.MakeAbstractInterpreter (ProcCfg.Normal) (TransferFunctions)

let checker {Callbacks.summary; proc_desc; tenv} : Summary.t =
  let convert_to_summary (post : Domain.astate) : Domain.summary =
    post
  in

  let extras = FormalMap.make proc_desc in

  let proc_data = ProcData.make proc_desc tenv extras in

  F.printf "\n\n:::::::::::::::::::::::::::::::::::: PrintChecker: function %s START ::::::::::::::::::::::::::::::::::::\n\n" 
    (Typ.Procname.to_string (Procdesc.get_proc_name proc_desc));

  match Analyzer.compute_post proc_data ~initial:PrintCheckerDomain.initial with
  | Some post ->
    F.printf "\n\n:::::::::::::::::::::::::::::::::::: PrintChecker: function %s END ::::::::::::::::::::::::::::::::::::\n\n" 
      (Typ.Procname.to_string (Procdesc.get_proc_name proc_desc));
      Payload.update_summary (convert_to_summary post) summary
  | None ->
      L.(die InternalError)
        "Analyzer failed to compute post for %a" Typ.Procname.pp (Procdesc.get_proc_name proc_data.pdesc)

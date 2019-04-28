open! IStd
module F = Format
module L = Logging


module Interval = struct 
  (* TODO *)
  type t = int * int

  let make : int -> int -> t = fun lb ub -> (lb, ub)

  let fromInt value = (value, value)

  let inBounds : t -> t -> bool = fun (lb1, ub1) (lb2, ub2) ->
    if (lb1 >= lb2 && ub1 <= ub2) then true
    else false

  let join : t -> t -> t = fun (lb1, ub1) (lb2, ub2) ->
    let lb = Pervasives.min lb1 lb2 in
    let ub = Pervasives.max ub1 ub2 in
    (lb, ub)

  let zero = (0, 0)

  let plus : t -> t -> t = fun (lb1, ub1) (lb2, ub2) -> (lb1 + lb2, ub1 + ub2)

  let minus : t -> t -> t = fun (lb1, ub1) (lb2, ub2) -> (lb1 - lb2, ub1 - ub2)

  let mult : t -> t -> t = fun (lb1, ub1) (lb2, ub2) -> (lb1 * lb2, ub1 * ub2)

  let div : t -> t -> t = fun (lb1, ub1) (lb2, ub2) -> (lb1 / lb2, ub1 / ub2)

  let modulo : t -> t -> t = fun (lb1, ub1) (lb2, ub2) -> (lb1 mod lb2, ub1 mod ub2)

  let negate itv = (-(fst itv), -(snd itv))

  let lb itv = fst itv

  let ub itv = snd itv

  let toString itv = sprintf "[%d : %d]" (fst itv) (snd itv)

end  

module Locals = Caml.Map.Make(Pvar)
module TemporaryLocals = Caml.Map.Make (Ident)

let bounds : Interval.t = (Interval.make (-20) 20)

type data = {callCount: int; locals: (Interval.t * Location.t) Locals.t; tmp_locals: Pvar.t TemporaryLocals.t}
type astate = data

(*type summary = astate*)
type summary = int

let initial : data = {callCount = 0; locals = Locals.empty; tmp_locals = TemporaryLocals.empty}

let get_int_from_exp : Const.t -> int = function
  (* | Const.Cint const -> (IntLit.to_int const) *)
  | Const.Cint const -> (match (IntLit.to_int const) with
    | Some i -> i
    | None -> L.die InternalError "Unsupported constatnt type!"
   )
  | _ -> L.die InternalError "Unsupported constatnt type!"

let ( <= ) ~lhs ~rhs = lhs.callCount <= rhs.callCount

let join stateA stateB =
  let newTemps = TemporaryLocals.merge (fun _ tempA tempB ->
    match tempA, tempB with
    | Some tempA, Some tempB -> Some tempA
    | None, tempB -> tempB
    | tempA, None -> tempA
  ) stateA.tmp_locals stateB.tmp_locals
  in

  (* 
    Merge both maps to create one that contains keys from 
    both maps and update their values 
  *)
  let newLocals = Locals.merge (fun _ localA localB -> 
    match localA, localB with
    | Some localA, Some localB -> 
      (
        (* Key was present in both maps, update the value *)
        let itv1 = fst localA in
        let itv2 = fst localB in

        if (phys_equal (Interval.inBounds itv1 bounds) false) then
          (* localA was already out of bounds, remember the location of bounds violation *)
          Some localA
        else if (phys_equal (Interval.inBounds itv2 bounds) false) then
          (* localA was already out of bounds, remember the location of bounds violation *)
          Some localB  
        else
          let itv = Interval.join itv1 itv2 in
          let loc = snd localA in
          Some (itv, loc)
      )
    | None, _ -> localB
    | _, None -> localA
  ) stateA.locals stateB.locals
  in
  let calls = Pervasives.max stateA.callCount stateB.callCount in
  {callCount = calls; locals = newLocals; tmp_locals = newTemps}

let widen ~prev ~next ~num_iters:_ = 
  if next.callCount > prev.callCount then ({next with callCount = 200})
  else (join prev next)

let pp : F.formatter -> astate -> unit =
  fun fmt astate -> 
    let pp_variable k v =
      F.fprintf fmt "%s = %s\n" (Pvar.to_string k) (Interval.toString (fst v))
    in
    Locals.iter pp_variable astate.locals;
    F.fprintf fmt "call count: %d" astate.callCount

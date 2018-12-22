let exec_instr (astate : Domain.astate) {ProcData.pdesc} _ (instr : HilInstr.t) =
    match instr with
    | Call (_, Direct callee_pname, actuals, _, loc) ->
      (
        match ConcurrencyModels.get_lock callee_pname actuals with
        | ConcurrencyModels.Lock ->
          F.printf "PrintChecker: Lock function call %s at line %a\n\n"
            (Typ.Procname.to_string callee_pname) Location.pp loc;
          astate
        | _ ->
          astate
      )
    | _ ->
      astate

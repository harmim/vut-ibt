let exec_instr (astate : Domain.astate) {ProcData.pdesc} _ (instr : HilInstr.t) =
    match instr with
    | Call (_, Direct callee_pname, actuals, _, loc) ->
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
    | _ ->
      astate

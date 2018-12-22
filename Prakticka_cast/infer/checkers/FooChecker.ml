(** Simple Checker *)
let checker { Callbacks.proc_desc; summary } : Summary.t =
  let proc_name = Procdesc.get_proc_name proc_desc in

  (*let is_println pln = match pln with*)
    (*| Typ.Procname.Java pn_java ->*)
        (*PatternMatch.java_proc_name_with_class_method*)
          (*pn_java "java.io.PrintStream" "println"*)
    (*| _ -> false in*)

  (*let is_println pln =*)
    (*String.equal*)

  let do_instr node = function
    (*| Sil.Call (_, Sil.Const (Const.Cfun pn), _, loc, _) when is_println pn ->*)
      (*Logging.internal_error "Sample Log Message %a." Typ.Procname.pp proc_name;*)
        (*ST.report_error*)
          (*proc_name*)
          (*proc_desc*)
          (*"CHECKERS_MY_SIMPLE_CHECKER"*)
          (*loc*)
          (*"A description of my simple checker"*)
    | _ -> () in

  Procdesc.iter_instrs do_instr proc_desc;

  summary

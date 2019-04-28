open Printf;;

class stack_of_ints =
  object (self)
    val mutable the_list = ([] : int list);
    method push x =
      the_list <- x :: the_list;
    method pop =
      let result = List.hd the_list in
      the_list <- List.tl the_list;
      result;
    method peek =
      List.hd the_list;
    method size =
      List.length the_list;
end
;;

let s = new stack_of_ints;;

let () =
  for i = 0 to 9 do
    s#push i;
  done;

  printf "Size: %d.\n" s#size;

  printf "\n";
  while s#size > 0 do
    printf "Element: %d.\n" s#pop;
  done;
;;

:- module a06.

:- interface.
:- import_module io.
:- pred main(io::di,io::uo) is cc_multi.

:- implementation.
:- import_module alib.
:- import_module list,string,bag,int.

:- pred maxf(int::in,list(character)::in,character::out) is det.
maxf(I,L,C):-
  from_list(L,L0),
  to_list_without_duplicates(L0,L1),
  map((pred(X::in,{Y,X}::out)is det:-count_value(L0,X,Y0),Y=I*Y0),L1,L2),
  sort(L2,L3),
  {_,C}=det_head(L3)
  .
  

main(!IO):-
  read_named_file_as_lines("inp/06",I,!IO),
  (I=ok(L0)
  ;I=error(E),print(E,!IO),L0=[]),
  map((pred(X::in,Y::out)is det:-to_char_list(X,Y)),L0,L1),
  transpose(L1,L2),
  map(maxf(-1),L2,L3),
  from_char_list(L3,P1),
  print_line(P1,!IO),
  map(maxf(1),L2,L4),
  from_char_list(L4,P2),
  print_line(P2,!IO)
  .


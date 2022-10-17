:- module a03.

:- interface.
:- import_module io.
:- pred main(io::di,io::uo) is cc_multi.

:- implementation.
:- import_module list,int,string,require.

:- pred chk(list(int)::in) is semidet.
chk(L):-
  length(L,3),
  sort(L,[A,B,C]),
  C<A+B.

:- pred transpose(list(list(int))::in,list(list(int))::out) is cc_multi.
transpose([],[]).
transpose([[]|_],[]).
transpose(A,[B|C]):-
  B=map(det_head,A),
  A0=map(det_tail,A),
  transpose(A0,C).


main(!IO):-
  read_named_file_as_lines("inp/03",I,!IO),
  (I=ok(L0)
  ;I=error(E),print(E,!IO),L0=[]),
  L1=map((func(X)=Y:-filter_map(to_int,split_at_char(' ',X),Y)),L0),
  % Part 1
  filter(chk,L1,L2),
  list.length(L2,SL2),
  print("Part 1: ",!IO),
  print_line(SL2,!IO),
  % Part 2:
  print("Part 2: ",!IO),
  transpose(L1,L3),
  condense(L3,L4),
  chunk(L4,3,L5),
  filter(chk,L5,L6),
  list.length(L6,SL6),
  print_line(SL6,!IO).


:- module a10.

:- interface.
:- import_module io.
:- pred main(io::di,io::uo) is det.

:- implementation.
:- import_module alib.
:- import_module list,string,int,char,map,require.

% :- pred go(int::out,int::out,cl::in,cl::out) is cc_multi.
% go(X,Y) --> l("value "),num(X),l(" goes to bot "),num(Y).
% go(0,0) --> [].

% :- pred give(int::out,int::out,int::out,cl::in,cl::out) is nondet.
% give(X,Y,Z) --> l("bot "),num(X),l(" gives low to bot "),num(Y),l(" and high to "),num(Z).

:- pred in_or_add({int,int}::in,map(int,list(int))::in,map(int,list(int))::out) is det.
in_or_add({A,B},Y,Z):-
  (if insert(B,[A],Y,Z0) then Z=Z0
   else
     lookup(Y,B,A0),
     det_update(B,[A|A0],Y,Z))
  .

:- pred p1(map(int,list(int)),list({int,int,int}),map(int,list(int))).
:- mode p1(in                ,in                 ,out               ) is det.
p1(In,Cmd,Out):-
  (if find_first_match((pred({X,_,_}::in) is semidet:-
     search(In,X,L),
     length(L,2)
   ),Cmd,T)
   then {Mch,B1,B2}=T
   else unexpected($pred,"did not find first match")
  ),
  lookup(In,Mch,N),
  sort(N,N0),
  det_head_tail(N0,Lo,H),
  Hi=det_head(H),
  in_or_add({Lo,B1},In,In0),
  in_or_add({Hi,B2},In0,In1),
  (if delete_first(Cmd,{Mch,B1,B2},Cmd0) then Cmd1=Cmd0 else unexpected($pred,"empty Cmd")),
  (if Cmd1=[] then Out=In1 else p1(In1,Cmd1,Out))
  .

:- pred max3(list(int)::in,int::out) is det.
max3(A,B):-sort(A,A0),det_index0(A0,2,B).


main(!IO):-
  rlines("inp/10",L0,!IO),
  % using the DCG was a pain so i'm just matching tokens here.
  filter_map((pred(X::in,{Y,Z}::out) is semidet:-
    % value 5 goes to bot 2
    [_,Y0,_,_,_,Z0]=split_at_char(' ',X),
    to_int(Y0,Y),
    to_int(Z0,Z)
  ),L0,As,L1),
  filter_map((pred(X::in,{A,B,C}::out) is semidet:-
    % bot A gives low to bot B and high to bot C
    [_,A0,_,_,_,OB,B0,_,_,_,OC,C0]=split_at_char(' ',X),
    to_int(A0,A),
    to_int(B0,B1),
    to_int(C0,C1),
    (if OB="output" then B=B1+1000 else B=B1),
    (if OC="output" then C=C1+1000 else C=C1)
  ),L1,Mo),
  map.init(M0),
  list.foldl(in_or_add,As,M0,M1),
  p1(M1,Mo,P1),
  keys_and_values(P1,P1k,P1v),
  (if find_index_of_match((pred(X::in) is semidet:-
     member(61,X),
     member(17,X)
   ),P1v,0,P1i0)
   then P1i=P1i0
   else unexpected($pred,"")),
  det_index0(P1k,P1i,P1f),
  print_line(P1f,!IO),
  lookup(P1,1000,P20l),
  lookup(P1,1001,P21l),
  lookup(P1,1002,P22l),
  print_line(det_head(P20l)*det_head(P21l)*det_head(P22l),!IO)
  .

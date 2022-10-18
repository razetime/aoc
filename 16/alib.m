:- module alib.

:- interface.
:- type ch == character.
:- type cl == list(ch).

:- import_module list,io,string.
:- pred transpose(list(list(T))::in,list(list(T))::out) is cc_multi.
:- pred seq(list(T),list(T),list(T)).
:- mode seq(out,in,out) is multi.
:- pred rlines(string::in,list(string)::out,io::di,io::uo) is det.
:- pred l(string::in,cl::in,cl::out) is semidet.

:- implementation.
transpose([],[]).
transpose([[]|_],[]).
transpose(A,[B|C]):-
  B=map(det_head,A),
  A0=map(det_tail,A),
  transpose(A0,C).

seq([])     --> [].
seq([E|Es]) --> [E], seq(Es).

rlines(N,L0,!IO):-
  read_named_file_as_lines(N,I,!IO),
  (I=ok(L0)
  ;I=error(E),print(E,!IO),L0=[]).

l(X,Y,Z):-string.to_char_list(X,X0),append(X0,Z,Y).
:- end_module alib.

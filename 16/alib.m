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
:- pred rstr(string::in,string::out,io::di,io::uo) is det.
:- pred rchr(string::in,cl::out,io::di,io::uo) is det.
:- pred alp(cl::in) is semidet.
:- pred num(int::out,cl::in,cl::out) is nondet.

:- implementation.
:- import_module require,char.

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
  ;I=error(_),require.unexpected($pred,"lol")).

l(X,Y,Z):-string.to_char_list(X,X0),append(X0,Z,Y).

rstr(N,L1,!IO):-
  read_named_file_as_string(N,I,!IO),
  (I=ok(L0),L1=strip(L0)
  ;I=error(_),require.unexpected($pred,"lol")).

rchr(N,L,!IO):-
  rstr(N,L0,!IO),
  to_char_list(L0,L).

alp(L):-all_true(is_alpha,L).

num(N) --> {all_true(is_digit,X)},seq(X),{from_char_list(X,X0),to_int(X0,N)}.
:- end_module alib.

:- module a09.

:- interface.
:- import_module io.
:- pred main(io::di,io::uo) is cc_multi.

:- implementation.
:- import_module alib.
:- import_module list,string,int,char,array.

:- pred substNxN(int::out,cl::in,cl::out) is multi.
substNxN(0) --> [].
substNxN(N) --> [A],{is_alpha(A)},substNxN(X),{N=1+X}.
substNxN(N) --> pattern(B),substNxN(D),{N=D+B}.

:- pred pattern(int::out,cl::in,cl::out) is nondet.
pattern(N) --> ['('],num(A),['x'],num(B),[')'],{N=A*B,length(C,A)},seq(C).

main(!IO):-
  rchr("inp/09",L0,!IO),
  %print_line(L0,!IO),
  (if substNxN(X,L0,[]) then P1=X else P1=0),
  %rlines("inp/09t",L0,!IO),
  %map((pred(X::in,Y::out)is cc_multi:-
  %      to_char_list(X,X0),
  %      (substNxN(X1,X0,[])->X2=X1;X2=0),
  %      Y=X2
  %    ),L0,P1),
  print_line(P1,!IO)
  .

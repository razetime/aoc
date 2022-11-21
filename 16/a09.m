/*
 * This program uses a lot of stack due to the requirement for matching ensted DCG patterns.
 * Build this program with a stack segments grade (marked 'stseg' in the list).
 */
:- module a09.

:- interface.
:- import_module io.
:- pred main(io::di,io::uo) is cc_multi.

:- implementation.
:- import_module alib.
:- import_module list,string,int,char,array.

:- pred substP1(int::in,int::out,cl::in,cl::out) is multi.
substP1(A,A) --> [].
substP1(A,N) --> [B],{is_alpha(B),C=1+A},substP1(C,N).
substP1(A,N) --> pattern(B),{C=A+B},substP1(C,N).

:- pred pattern(int::out,cl::in,cl::out) is nondet.
pattern(N) --> ['('],num(A),['x'],num(B),[')'],{N=A*B,length(C,A)},seq(C).

:- pred substP2(int::in,int::out,cl::in,cl::out) is multi.
substP2(A,A) --> [].
substP2(A,N) --> [B],{is_alpha(B),C=1+A},substP2(C,N).
substP2(A,N) --> pattern2(B),{C=A+B},substP2(C,N).

:- pred pattern2(int::out,cl::in,cl::out) is nondet.
pattern2(N) --> ['('],num(A),['x'],num(B),[')'],{length(C,A)},seq(C),{substP2(0,M,C,[]),N=B*M}.

main(!IO):-
  % Testing code:
  %rlines("inp/09t",L0,!IO),
  %map((pred(X::in,Y::out)is cc_multi:-
  %      to_char_list(X,X0),
  %      (substP2(0,X1,X0,[])->X2=X1;X2=0),
  %      Y=X2
  %    ),L0,P1),
  rchr("inp/09",L0,!IO),
  print_line(L0,!IO),
  (if substP1(0,X,L0,[]) then P1=X else P1=0),
  print_line(P1,!IO),
  (if substP2(0,Y,L0,[]) then P2=Y else P2=0),
  print_line(P2,!IO)
  .

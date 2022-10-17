:- module t_a07.

:- interface.
:- import_module io.
:- pred main(io::di,io::uo) is cc_multi.

:- implementation.
:- import_module alib.
:- import_module list,string,int,char.

:- pred tls(list(cl)::out,list(cl)::out,cl::in,cl::out) is nondet.
tls([X],[])        --> {alp(X)},seq(X).
tls([X0|X],[Y0|Y]) --> {alp(X0),alp(Y0),\+abba(Y0)},
                        seq(X0),['['],seq(Y0),[']'],tls(X,Y),{any_true(abba,[X0|X])}.

:- pred alp(cl::in) is semidet.
alp(L):-all_true(is_alpha,L).

:- pred abba(cl::in) is semidet.
abba([A,B,B,A|_]):-A\=B.
abba([_,A,B,C|L]):-abba([A,B,C|L]).
 
main(!IO):-
  rlines("inp/07",L0,!IO),
  filter((pred(X::in)is semidet:-
         to_char_list(X,X0),
         tls(_,_,X0,[]) 
      ),L0,L1),
  length(L1,L2),
  print_line(L2,!IO)
  .


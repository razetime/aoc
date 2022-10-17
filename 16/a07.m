:- module a07.

:- interface.
:- import_module io.
:- pred main(io::di,io::uo) is cc_multi.

:- implementation.
:- import_module alib.
:- import_module list,string,int,char.

:- pred tls(list(cl)::out,list(cl)::out,cl::in,cl::out) is nondet.
tls([X],[])        --> {alp(X)},seq(X).
tls([X0|X],[Y0|Y]) --> {alp(X0),alp(Y0)},
                       seq(X0),['['],seq(Y0),[']'],tls(X,Y).

:- pred alp(cl::in) is semidet.
alp(L):-all_true(is_alpha,L).

:- pred abba(cl::in) is semidet.
abba([A,B,B,A|_]):-A\=B.
abba([_,A,B,C|L]):-abba([A,B,C|L]).

:- pred aba(cl,character,character).
:- mode aba(in,out,out) is nondet.
:- mode aba(in,in,in) is semidet.
aba([A,B,A|L],A,B):-A\=B.
aba([_,A,B|L],X,Y):-aba([A,B|L],X,Y).
  
main(!IO):-
  rlines("inp/07",L0,!IO),
  map((pred(X::in,Y::out)is cc_multi:-
         to_char_list(X,X0),
         (if tls(A,B,X0,[]) then Y={A,B} else Y={[],[]}) 
      ),L0,L1),
  L3=map(string,L1),
  L4=join_list("\n",L3),
  print_line(L4,!IO),
  filter((pred({X,Y}::in)is semidet:-
            any_true(abba,X),
            all_false(abba,Y)
         ),L1,L2),
  length(L2,P1),
  print_line(P1,!IO),
  filter((pred({X,Y}::in)is semidet:-
            member(T,X),
            member(U,Y),
            aba(T,A,B),
            aba(U,B,A)
         ),L1,L5),
  length(L5,P2),
  print_line(P2,!IO)
  .


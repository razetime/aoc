:- module a08.

:- interface.
:- import_module io.
:- pred main(io::di,io::uo) is cc_multi.

:- implementation.
:- import_module alib.
:- import_module list,string,int,char,bool,array2d,solutions,require,bag.

:- type op ---> f;c;r.

:- pred cmd(op::out,int::out,int::out,cl::in,cl::out) is nondet.
cmd(f,W,H) --> l("rect "),num(W),['x'],num(H).
cmd(r,R,P) --> l("rotate row y="),num(R),l(" by "),num(P). 
cmd(c,R,P) --> l("rotate column x="),num(R),l(" by "),num(P).

:- pred fillwh(int::in,int::in,array2d(bool)::in,array2d(bool)::out) is det.
fillwh(C,R,A,B):-
  solutions((pred({Y,X}::out) is nondet:-
              member(Y,0..(R-1)),
              member(X,0..(C-1))
            ),P),
  foldl((pred({Y,X}::in,T::in,U::out) is det:-
          set(Y,X,yes,T,U)
        ),P,A,B)
  .

:- pred rot(op::in,int::in,int::in,array2d(bool)::in,array2d(bool)::out) is det.
rot(O,I,D,A,B):-
  bounds(A,H,W),
  (O=r,
   L=map((func(X)={I,X}),0..(W-1)),
   Dr=0,
   Dc=D
  ;O=c,
   L=map((func(X)={X,I}),0..(H-1)),
   Dr=D,
   Dc=0
  ;unexpected($pred,"only rc")
  ),
  Al=lists(A),
  As=array2d(Al),
  foldl((pred({R,C}::in,X::in,Y::out) is det:-
          lookup(As,R,C,P),
          R0=(R+Dr)mod H,
          C0=(C+Dc)mod W,
          set(R0,C0,P,X,Y)
        ),L,A,B)
  .

:- pred b2c(bool::in,char::out) is det.
b2c(yes,'⎕').
b2c(no,' ').
   
main(!IO):-
  rlines("inp/08",L0,!IO),
  map((pred(X::in,Y::out) is multi:-
        to_char_list(X,X0),
        (if cmd(C,W,H,X0,[])
         then Y={C,W,H}
         else Y={f,0,0}) 
      ),L0,L1),
  S=init(6,50,no),
  list.foldl((pred({C,A,B}::in,Y::in,Z::out) is det:-
               (
                 C=f,
                 fillwh(A,B,Y,Z)
                ;C=r,
                 rot(r,A,B,Y,Z)
                ;C=c,
                 rot(c,A,B,Y,Z)
               ) 
             ),L1,S,S0),
  S1=lists(S0),
  condense(S1,S2),
  S3=bag(S2),
  count_value(S3,yes,P1),
  print_line(P1,!IO),
  map((pred(X::in,Y::out)is det:-map(b2c,X,X0),from_char_list(X0,Y))
      ,S1,S4),
  P2=join_list("\n",S4),
  print_line(P2,!IO)
  .

:- module a08.

:- interface.
:- import_module io.
:- pred main(io::di,io::uo) is det.

:- implementation.
:- import_module alib.
:- import_module list,string,int,char,bool,array2d,solutions,require.

:- type op ---> f;c;r.

:- pred cmd(op::out,int::out,int::out,cl::in,cl::out) is nondet.
cmd(f,W,H) --> l("rect "),num(W),['x'],num(H).
cmd(r,R,P) --> l("rotate row y="),num(R),l(" by "),num(P). 
cmd(c,R,P) --> l("rotate column x="),num(R),l(" by "),num(P).


:- pred num(int::out,cl::in,cl::out) is nondet.
num(N) --> seq(X),{from_char_list(X,X0),to_int(X0,N)}.

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
  (if O=r then
   L=map((func(X)={I,X}),0..(W-1)),
   Dr=0,
   Dc=D
   else if O=c then
   L=map((func(X)={X,I}),0..(H-1)),
   Dr=D,
   Dc=0
   else unexpected($pred,"only rc")
  ),
  %S=string(map((func({R,C})={R,C,(R+Dr)rem H,(C+Dc)rem W,P}:-lookup(A,R,C,P)),L)),error(S),
  foldl((pred({R,C}::in,X::in,Y::out) is det:-
          lookup(A,R,C,P),
          R0=(R+Dr)mod H,
          C0=(C+Dc)mod W,
          set(R0,C0,P,X,Y)
          %S=string({R,C,R0,C0,H,W,lists(Y)}),error(S)
        ),L,A,B)
  .
   
main(!IO):-
  %rlines("inp/08",L0,!IO),
  %map((pred(X::in,Y::out) is multi:-
  %      to_char_list(X,X0),
  %      (if cmd(C,W,H,X0,[])
  %       then Y={C,W,H}
  %       else Y={f,0,0}) 
  %    ),L0,L1),
  %P1=L1,
  %L="rect 3x2",
  %L="rotate row x=1 by 1",
  %L="320",
  %(if cmd(C,W,H,to_char_list(L),[]) then L1={C,W,H} else L1={f,0,0}),
  %(if num(N,to_char_list(L),[]) then L1=N else L1=0),
  %S=init(6,50,no),
  S=init(3,7,no),
  %list.foldl((pred({C,A,B}::in,Y::in,Z::out) is det:-
  %             (
  %               C=f,
  %               fillwh(A,B,Y,Z)
  %              ;C=r,
  %               rot(r,A,B,Y,Z)
  %              ,C=c
  %               rot(c,A,B,Y,Z)
  %             ) 
  %           ),L1,S,P1)
  fillwh(3,2,S,S0),
  print_line(lists(S0),!IO),
  rot(c,1,2,S0,P1),
  print_line(lists(P1),!IO)
  .

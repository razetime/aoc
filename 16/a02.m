:- module a02.

:- interface.
:- import_module io.
:- pred main(io::di,io::uo) is det.
:- type dir ---> u;d;l;r.

:- implementation.
:- import_module array2d,int,string,list,require.

:- pred p1(list(dir)::in,int::in,int::out) is det.
p1(D,S,F):-list.foldl(move,D,S,F).

:- pred move(dir::in,int::in,int::out) is det.
move(l,S,E):-if S rem 3=0 then E=S else E=S-1.
move(r,S,E):-if S rem 3=2 then E=S else E=S+1.
move(u,S,E):-if S//3=0 then E=S else E=S-3.
move(d,S,E):-if S//3=2 then E=S else E=S+3.

:- pred char_dir(character::in,dir::out) is det.
char_dir('U',u).
char_dir('D',d).
char_dir('L',l).
char_dir('R',r).
char_dir(_,_):-unexpected($pred,"'dir").

:- pred p2(list(dir)::in,character::out,{int,int}::in,{int,int}::out) is det.
p2(D,F,S,{R,C}):-
  list.foldl(move2,D,S,{R,C}),
  lookup(gridp2,R,C,F).

:- pred move2(dir::in,{int,int}::in,{int,int}::out) is det.
move2(D,{R,C},E):-
  (D=u,{R0,C0}={R-1,C}
  ;D=d,{R0,C0}={R+1,C}
  ;D=l,{R0,C0}={R,C-1}
  ;D=r,{R0,C0}={R,C+1}),
  (if in_bounds(gridp2,R0,C0)
   then (if lookup(gridp2,R0,C0,'x')
         then E={R,C}
         else E={R0,C0})
   else  E={R,C}).

:- func gridp2=array2d(character) is det.
gridp2=from_lists([['x','x','1','x','x'],
                   ['x','2','3','4','x'],
                   ['5','6','7','8','9'],
                   ['x','A','B','C','x'],
                   ['x','x','D','x','x']]).

main(!IO):-
  read_named_file_as_lines("inp/02",I,!IO),
  (I=ok(L0)
  ;I=error(E),print(E,!IO),L0=[]),
  map((pred(X::in,Y::out) is det:-
         string.to_char_list(X,Y0),
         map(char_dir,Y0,Y)
      ),L0,L1),
  map((pred(X::in,Y::out) is det:-p1(X,4,Y-1)),
       L1,P1),
  print_line(P1,!IO),
  map_foldl(p2,L1,P2,{2,0},_),
  print_line(P2,!IO).

:- module a01.
:- interface.

:- import_module io.

:- pred main(io::di, io::uo) is cc_multi.

:- implementation.

:- import_module string, list, int, require.

% both part 1 and 2
:- pred entry(list(string)::in, list(list(list(int)))::out, list(int)::out) is multi.
entry(Dirs, Out2, Out1) :-
  map((pred(X::in, [L,R]::out) is det :-
         split(X, 1, L, R)),
       Dirs, Spl),
  (if map_foldl2((pred([T, B]::in, L::out, D::in, Ds::out, P::in, Ps::out) is nondet :-
            rot(T, D, Ds),
            BI = string.det_to_int(B),
            map((pred(X::in, Y::out) is det :- Y = X*BI), Ds, Dso)            map_corresponding((pred(X::in, Y::in, Z::out) is det :- Z = X+Y), P, Dso, Ps),
            inter(P,Ds,BI,L)
        ), Spl, OutI, [0, 1], _, [0, 0], OutII)
  then Out2 = OutI, Out1 = OutII
  else unexpected($pred, "Unexpected arguments in call to entry/3")).
          
:- pred rot1(string::in, list(int)::in, list(int)::out) is semidet.
rot1("L", [X, Y], [-Y, X]).
rot1("R", [X, Y], [Y, -X]).

:- pred rot(string::in, list(int)::in, list(int)::out) is det.
rot(LR, Inlist, Outlist) :-
   ( if   rot1(LR, Inlist, Outlist0)
     then Outlist = Outlist0
     else unexpected($pred, "Unexpected arguments in call to rot/3")
   ).

:- pred inter(list(int)::in, list(int)::in, int::in, list(list(int))::out) is multi.
inter(_,_,0,[]).
inter(Pt, Dl, T, [Pt|Lst]) :-
  map_corresponding((pred(X::in, Y::in, Z::out) is det :- Z = X+Y), Pt, Dl, Ptt),
  inter(Ptt, Dl, T-1, Lst).

:- pred first_rep(list(list(int))::in, list(int)::out) is det.
first_rep([],[-1,-1]).
first_rep([X|Y],Z) :-
  if member(X,Y) then Z=X else first_rep(Y,Z).

:- pred abs_sum(list(int)::in, int::out) is det.
abs_sum(Arr,S):-
  Abs = map(abs,Arr),
  S = foldl((func(A, B) = A+B), Abs,0).

main(!IO) :-
  io.open_input("inp/01", InputRes, !IO),
  (
    InputRes = ok(Input),
    io.read_file_as_string(Input, ReadRes, !IO),
    (
      ReadRes = ok(Contents),
      io.close_input(Input, !IO)
    ;
      Contents = "",
      ReadRes = error(_, ReadError),
      print_io_error(ReadError, !IO) 
    )
  ;
    Contents = "",
    InputRes = error(InputError),
    print_io_error(InputError, !IO)
  ),
  CS = strip(Contents),
  Dirs = split_at_string(", ", CS),
  entry(Dirs, P2, P1),
  write_string("Part 1: ",!IO),
  abs_sum(P1, R),
  print(R, !IO),
  nl(!IO),
  write_string("Part 2: ",!IO),
  Flat = condense(P2),
  first_rep(Flat, Pa2),
  abs_sum(Pa2, R2),
  print(R2,!IO),
  nl(!IO).
  

:- pred print_io_error(io.error::in, io::di, io::uo) is det.
print_io_error(Error, !IO) :-
  io.stderr_stream(Stderr, !IO),
  io.write_string(Stderr, io.error_message(Error), !IO),
  io.set_exit_status(1, !IO).

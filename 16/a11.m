:- module a11.

:- interface.
:- import_module io.
:- pred main(io::di,io::uo) is det.

:- implementation.
:- import_module alib.
:- import_module list,string,int,char.

:- pred move()

main(!IO):-
  rlines("inp/11",L0,!IO),
  map((pred(X::in,Y::out) is det:-
    split_by_codepoint(X,25,_,Y0),
    length(Y0,Y0l),
    split_by_codepoint(Y0,Y0l-2,Y1,_)
    Y2=split_at_string(", ",Y1),
    map((pred(X::in,Y::out) is det:-
      
    ),Y2,Y)
  ),L0,L1),
  print_line(L1,!IO)
  .

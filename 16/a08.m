:- module a08.

:- interface.
:- import_module io.
:- pred main(io::di,io::uo) is det.

:- implementation.
:- import_module alib.
:- import_module list,string,int,char.

:- pred rect(int::out,int::out,cl::in,cl::out) is det.
rect(W,H) --> l("rect "),num(W),['x'],num(H).

:- pred num(int::out,cl::in,cl::out) is det.
num(N) --> {member(X,['0','1','2','3','4','5','6','7','8','9'])},[X],num(Y),{N=X*10+Y}.

main(!IO):-
  rlines("inp/08",L0,!IO),
  map((pred(X::in,Y::out)is cc_multi:-
         to_char_list(X,X0),
         (if tls(A,B,X0,[]) then Y={A,B} else Y={[],[]}) 
      ),L0,L1)
  print_line(L1,!IO).
  .

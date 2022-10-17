:- module a05.

:- interface.
:- import_module io.
:- pred main(io::di,io::uo) is cc_multi.

:- implementation.
:- import_module md5.
:- import_module list,string,int,char.

:- pred f_p1(string::in,int::in,int::in,list(character)::out) is multi.
f_p1(_,_,0,[]).
f_p1(P,I,C,S):-
  P0=md5sum(P++from_int(I)),
  (if split(P0,5,"00000",Ps),first_char(Ps,Pc,_)
   then S=[Pc|S0],f_p1(P,I+1,C-1,S0)
   else f_p1(P,I+1,C,S)).


:- pred f_p2(string::in,int::in,int::in,list(int)::in,list({int,character})::out) is multi.
f_p2(_,_,0,_,[]).
f_p2(P,I,C,V,S):-
  P0=md5sum(P++from_int(I)),
  (if split(P0,5,"00000",Ps),
      to_char_list(Ps,Pl),Pl=[Pp0,Pc|_],octal_digit_to_int(Pp0,Pp),
      \+member(Pp,V)
   then S=[{Pp,Pc}|S0],f_p2(P,I+1,C-1,[Pp|V],S0)
   else f_p2(P,I+1,C,V,S)).
   
main(!IO):-
  Inp="ojvtpuvg",
  f_p1(Inp,0,8,A0),
  from_char_list(A0,P1),
  print_line(P1,!IO),
  f_p2(Inp,0,8,[],B0),
  sort(B0,B1),
  B2=map(func({_,Y})=Y,B1),
  from_char_list(B2,P2),
  print_line(P2,!IO)
  .

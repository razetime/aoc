:- module a04.

:- interface.
:- import_module io.
:- pred main(io::di,io::uo) is cc_multi.

:- implementation.
:- import_module list,int,string,require,char,bag.

:- type cl == list(character).

:- pred seq(list(T),list(T),list(T)).
:- mode seq(out,in,out) is multi. 
seq([])     --> [].
seq([E|Es]) --> [E], seq(Es).

:- pred room(cl::out,int::out,cl::out,cl::in,cl::out) is nondet.
room(Enc,Id,CSM) --> seq(Enc),
                    {all_true(char.is_digit,LI)},seq(LI),{to_int(from_char_list(LI),Id)},
                    ['['],seq(CSM),[']'].


:- pred realp1({cl,int,cl}::in,{cl,int}::out) is semidet.
realp1({Enc,Id,CSM},{Enc,Id}):-
  delete_all(Enc,'-',E0),
  E1=bag.from_list(E0),
  E2=sort(to_list_without_duplicates(E1)),
  map((pred(X::in,{Y,X}::out) is det:-
         count_value(E1,X,C),
         Y=0-C
      ),E2,E3),
  sort(E3,E4),
  map((pred({_,Y}::in,Y::out) is det),
       E4,E5),
  take(5,E5,CSM)
  .

:- pred caesar(int::in,character::in,character::out) is multi.
caesar(_,'-','-').
caesar(S,C,Cs):-
  to_int(C,C0+97),
  det_from_int(97+(C0+S)rem 26,Cs)
  .

main(!IO):-
  read_named_file_as_lines("inp/04",I,!IO),
  (I=ok(L0)
  ;I=error(E),print(E,!IO),L0=[]),
  map((pred(X::in,{Enc,Id,CSM}::out) is cc_multi:-
         (if room(Enc0,Id0,CSM0,to_char_list(X),[])
          then Enc=Enc0,Id=Id0,CSM=CSM0
          else Enc=[],Id=0,CSM=[])
      ),L0,L1),
  filter_map(realp1,L1,L2),
  P1=foldl((func({_,X},Y)=X+Y),L2,0),
  print_line(P1,!IO),
  map((pred({X,Y}::in,{Z,Y}::out) is cc_multi:-
        map(caesar(Y),X,X0),
        string.from_char_list(X0,Z)
      ),L2,L3),
  (if find_first_match((pred({"northpole-object-storage-",_}::in) is semidet),
                        L3,{_,L4})
   then P2=L4 else P2=0),
  print_line(P2,!IO)
  .

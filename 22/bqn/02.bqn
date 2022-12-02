l←•Import "lib.bqn"
i←0‿2⊸⊏¨•FLines "../inp/02"

P1R←{
  m‿o: (m-'A')=o-'X' ? 3;
  "AY":6; "BZ":6; "CX":6;
  0
}
p1←+´{𝕊 m‿o: (P1R 𝕩)+o-'W'}¨i
•Show p1

w←2‿3‿1
l←3‿1‿2
P2R←{
  𝕊 m‿'Y': 3+m-'A'-1;
  𝕊 m‿'X': l⊑˜m-'A';
  𝕊 m‿'Z': 6+w⊑˜m-'A';
  @
}
p2←+´P2R¨i
•Show p2

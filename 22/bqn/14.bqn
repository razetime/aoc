l←•Import "../../lib.bqn"
i←{(l.Dec¨','⊸l.Split)¨((≠sp)⥊1‿0)/sp←' ' l.Split 𝕩}¨•FLines "../inp/14"

w←∾{(<𝕨)+(↕1+⌈´|d)×<×d←𝕩-𝕨}´¨∾(<˘2⊸↕)¨i
b←⌈´w

Sim←{
  # walls, sand
  chk‿upd‿fchk 𝕊 ws‿ss:
  s‿n←{
    s‿n:
    nxt←⟨0‿1,¯1‿1,1‿1⟩+<s
    nxt(¬∊⟜(ws∾ss))⊸/↩
    nxt Upd↩
    ⟨⊑nxt∾⋈s,0<≠nxt⟩
  }•_while_{s‿n:n∧Chk s} ⟨500‿0,1⟩
  {FChk s? s; 0}
}

Part←{
  𝕊 fns:
  ⊑{
    ss‿·:
    {0=1000|l←≠ss?•Show l;@}
    r←fns Sim ⟨w,⊑𝕩⟩
    # •Show r
    ⟨ss∾(r≢0)/⋈r,r≢0⟩
  }•_while_ {·‿c:c} ⟨⟩‿1
}
•Show ≠Part ⟨{(𝕩≥0‿0)∧○(∧´)𝕩≤b},⊢,{(𝕩≥0‿0)∧○(∧´)𝕩≤b}⟩ 
# Part 2 takes very, vey long. About a minute per 1000 particles.
•Show 1+≠Part ⟨1,((2+1⊑b)>(1⊸⊑)¨)⊸/,500‿0⊸≢⟩

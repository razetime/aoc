l←•Import "../../lib.bqn"
i←' 'l.Split¨•FLines "../inp/09"
i{d‿a:⟨{"U":0‿¯1;"D":0‿1;"L":¯1‿0;"R":1‿0}d,l.Dec a⟩}¨↩

Sim←{ n 𝕊 in:
  ⊑⟨⟨⟩,n⥊⟨0‿0⟩⟩{d‿a 𝕊 vt‿rp:
    int←{{1<⌈´|𝕨-𝕩?𝕩+×𝕨-𝕩;𝕩}`d⊸+⌾⊑𝕩}⍟(↕a+1) rp
    ⟨vt∾¯1⊑¨int,¯1⊑int⟩
  }´⌽in
}
•Show ≠⍷2 Sim i
•Show ≠⍷10 Sim i

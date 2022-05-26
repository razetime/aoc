# Day 4
⟨Split⟩ ← •Import "lib.bqn"

inp ← •FLines "4.txt"

nums ← •BQN "⟩"∾˜"⟨"∾⊑inp
boards ← {>{•BQN¨(×≠¨)⊸/' 'Split𝕩}¨𝕩}¨(<⟨⟩) Split 2↓inp

# Part 1:
Bingo ← {∨´¯5=+´˘∾⟜⍉𝕩}

•Show {
  𝕊 b‿i:
  ({+´⥊𝕩+¯1=𝕩}b⊑˜⊑/Bingo¨b)×(i-1)⊑nums
}{
  𝕊 b‿i:
  n ← i⊑nums
  ⟨b-(n+1)×n=b, i+1⟩
} •_while_ { ¬∨´Bingo¨⊑𝕩 } ⟨boards, 0⟩ 

# Part 2:
•Show {
  𝕊 b‿i:
  n ← i⊑nums
  ({+´⥊𝕩+¯1=𝕩}⊑(b-(n+1)×n=b)/˜¬Bingo¨b)×n
}{
  𝕊 b‿i:
  n ← i⊑nums
  ⟨b-(n+1)×n=b, i+1⟩
} •_while_ {
  𝕊 b‿i:
  n ← i⊑nums
  ¬∧´Bingo¨b-(n+1)×n=b
} ⟨boards, 0⟩ 

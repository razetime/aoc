#!/usr/bin/env cbqn

⟨Split, SR⟩ ← •Import "lib.bqn"

inp ← ({•BQN'⟩'∾˜'⟨'∾𝕩}¨1⊸↓)¨(<"")Split•FLines "19.txt"

ng ← {⥊a∾⌜𝕩}⍟2 a←1‿¯1
Rts ← {⥊ng×⌜<˘𝕩⊏˜>⟨⟨0, 1, 2⟩, ⟨0, 2, 1⟩, ⟨1, 0, 2⟩, ⟨1, 2, 0⟩, ⟨2, 0, 1⟩, ⟨2, 1, 0⟩⟩}
final ← ⊑inp
th ← ⋈final
ogns ← ⟨⟨0,0,0⟩⟩

{
  𝕊 x:
  diff ← ⟨⟩
  rs ← <˘⍉>Rts¨⊑𝕩
  fil ← ∨´¨⊸/ {
    𝕊 pts:
    {
      a←⥊pts-⌜𝕩 
      11=+´f←¬∊a? diff≡⟨⟩ ? diff ↩ (⊑/f)⊑a, 1;0
    }¨rs
  }¨th
  0≠≠fil ?
  fil ↩ ⊑fil
  ogns ∾↩ ⋈diff
  th ∾↩ ⋈((⊑/fil)⊑rs)+<diff
  final ⍷∘∾↩ ¯1⊑th  
  1↓x;
  1⌽𝕩
} •_while_ (0≠≠) 1↓inp

# Part 1:
•Show ≠final

# Part 2:
•Show ⌈´⥊(+´|∘-)⌜˜ ogns
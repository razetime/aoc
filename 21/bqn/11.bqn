#!/usr/bin/env cbqn

⟨Pad⟩ ← •Import "lib.bqn"

inp ← >'0'-˜•FLines "11.txt"

Step ← {𝕊⍟(∨´⥊𝕩>9) {x←1‿1⊑𝕩, (0≠x)×(10>x)×x++´9<(4⊸↑∾¯4⊸↑)⥊𝕩}⎉2 3‿3↕9 Pad 𝕩}
# Part 1:
•Show +´0=∾⥊¨(Step 1⊸+)⍟(1+↕100) inp

# Part 2:
•Show 0{(∧´0=⥊𝕩)◶⟨(𝕨+1)⊸𝕊 Step, 𝕨⟩ 1+𝕩} inp

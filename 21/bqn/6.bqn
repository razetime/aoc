# Day 6
inp ← •BQN"⟩"∾˜"⟨"∾⊑•FLines "6.txt"

# Part 1:
•Show ≠{(7⊸|⌾((𝕩<7)⊸/)𝕩-1)∾(+´0=𝕩)⥊8}⍟80 inp

# Part 2:
•Show +´{f←⊑𝕩, (f⊸+)⌾(6⊸⊑)(1↓𝕩)∾f}⍟256 9↑≠¨⊔inp
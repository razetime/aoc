#!/usr/bin/env cbqn

inp ← >'0'-˜•FLines "9.txt"

# Part 1:
lows ← {∧´(4⊸⊑<1‿3‿5‿7⊸⊏)⥊𝕩}¨<⎉2 3‿3 ↕{⍉⌽∞∾˘𝕩}⍟4 inp
•Show +´1+inp/˜○⥊ lows

# Part 2:
•Show ×´¯3↑∧(≠ ⍷)¨ {
  𝕊 coord:
  vn ← {𝕩/˜(9≠𝕩⊑inp)∧(𝕩⊑inp)>coord⊑inp}{𝕩/˜(𝕩≥0)∧○(∧´¨)𝕩<<≢lows}⟨1‿0, ¯1‿0, 0‿1, 0‿¯1⟩+<𝕩
  (∾𝕊¨vn)∾⋈𝕩
}¨(⊢/○⥊↕∘≢)lows
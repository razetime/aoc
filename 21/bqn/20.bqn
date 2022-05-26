#!/usr/bin/env cbqn

⟨Split, B2D, Pad⟩ ← •Import "lib.bqn"

⟨pat⟩‿grid ← '#'=(<"")Split•FLines "20.txt"

•Show (+´·⥊¯1⊸⊑)¨{𝕊 p‿mat: ⊑⊸⋈pat⊏˜(B2D ⥊)⎉2 3‿3↕p Pad⍟2 mat}⍟2‿50 0⋈>grid
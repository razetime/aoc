#!/usr/bin/env cbqn

⟨Split⟩ ← •Import "lib.bqn"

pts‿folds ← "" <⊸Split •FLines "13.txt"
pts ↩ {⌽•BQN¨','Split𝕩}¨pts
folds ↩ {𝕊 ax‿pos: ⟨(ax≡"y")⊑⍉‿⊢, •BQN pos⟩}¨{'='Split ¯1⊑' 'Split𝕩}¨folds
grid ← ∊⟜pts˘ ↕1+⌈´pts

# Part 1:
Fold ← {Ax‿pos 𝕊 𝕩: Ax pos ↑{m←𝕨⌈○≠1↓𝕩, 𝕨∨○{𝕩↑˜-+⟜m⊸-≠𝕩}⌽1↓𝕩}´(+`pos=↕≠Ax 𝕩)⊔Ax 𝕩}
•Show +´⥊(⊑folds) Fold grid

# Part 2:
•Show " 𝕊"⊏˜grid Fold´⌽folds
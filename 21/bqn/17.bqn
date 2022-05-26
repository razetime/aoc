#!/usr/bin/env cbqn

⟨Split⟩ ← •Import "lib.bqn"

ix‿iy ← 2↓' 'Split⊑•FLines "17.txt"
x1‿x2 ← •BQN¨0‿2⊏'.'Split 2↓¯1↓ix
y1‿y2 ← •BQN¨0‿2⊏'.'Split 2↓iy
ly ← y1⌊y2

# Part 1:
Inside ← {𝕊 x‿y: (x1≤x)∧(x≤x2)∧(y1≤y)∧y≤y2}

trajs ← {
  traj ← ⟨⟩
  {
    𝕊 p‿d:
    traj ∾↩ 1↑r ← ⟨p+d, 0‿¯1+-⟜×⌾⊑d⟩
    r    
  } •_while_ {𝕊 ⟨x‿y, dx‿dy⟩: y≥ly} ⟨0‿0, 𝕩⟩
  traj
}¨⍷⥊(↕2×x1⌈x2)∾⌜∾⟜-↕|2×y1 ⌈○| y2
•Show 1⊑⌈´∾(mask ← (∨´Inside¨)¨trajs)/trajs

# Part 2:
•Show +´mask
#!/usr/bin/env cbqn

inp ← ".>v"⊐>•FLines "25.txt"

i ← 0
Disp ← {•Show ".>v"⊏˜+´0‿1‿2×𝕩}
•Show {
  Move n‿e‿s: # none, east, south
  a ← 𝕩
  me ← n∧¯1⌽˘e # moved points
  e ↩ me∨e-1⌽˘me # new east
  n ↩ ¬e∨s
  ms ← n∧¯1⌽s # moved points
  s ↩ ms∨s-1⌽ms # new south
  n ↩ ¬e∨s
  {a ≡ n‿e‿s ? 1; 1 + Move n‿e‿s} 
} (↕3)=<inp

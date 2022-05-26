# Day 3
⟨B2D⟩ ← •Import "lib.bqn"

inp ← '0'-˜•FLines "3.txt"

# Part 1: 
Mode ←{(+´𝕩)≥(≠𝕩)-+´𝕩}
•Show (⊢×○B2D¬)Mode inp

# Part 2:
•Show oxy ← ⊑⊑{
  𝕊 b‿i:
  m ← i⊑Mode b
  ⟨(m=i⊑¨b)/b,i+1⟩
} •_while_ {1≠≠⊑𝕩} inp‿0

•Show co2 ← ⊑⊑{
  𝕊 b‿i:
  m ← i⊑¬Mode b
  ⟨(m=i⊑¨b)/b,i+1⟩
} •_while_ {1≠≠⊑𝕩} inp‿0

•Show oxy ×○B2D co2
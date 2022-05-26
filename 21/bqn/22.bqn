#!/usr/bin/env cbqn
⟨Split⟩ ← •Import "lib.bqn"

inp ← {⟨'n'=1⊑𝕩, {•BQN¨0‿¯1⊏'.'Split 2↓𝕩}¨',' Split 1⊑' 'Split𝕩⟩}¨•FLines "22.txt"

# Part 1:
init ← 101‿101‿101⥊0
Inside ← {⟨x1‿x2, y1‿y2, z1‿z2⟩ 𝕊 ⟨x3‿x4, y3‿y4, z3‿z4⟩:(x1≥x3)∧(x2≤x4)∧(y1≥y3)∧(y2≤y4)∧(z1≥z3)∧(z2≤z4)}
#•Show +´⥊init{b‿x 𝕊 w: b¨⌾(((⥊∾⌜)´Range´¨x)⊸⊑) w}´⌽(Inside⟜(3/⟨¯50‿50⟩)¯1⊸⊑)¨⊸/inp

# Part 2:
# https://stackoverflow.com/a/12771129/4568534 is the main idea.

cubes ← ⟨⟩
{
  b‿ux‿vx‿uy‿vy‿uz‿vz:
  cubes ↩ (×≠¨)⊸/∾{
    ux2‿vx2‿uy2‿vy2‿uz2‿vz2:
    (ux > vx2 )∨( vx < ux2 )∨( uy > vy2 )∨( vy < uy2 )∨( uz > vz2 )∨( vz < uz2)?⋈𝕩;
    ux2‿vx2‿uy2‿vy2‿uz2‿vz2:
    splits ← ⟨⟩
		AS ← {splits ∾↩ ⋈𝕩}
    {ux > ux2 ? AS ⟨ux2, ux-1, uy2, vy2, uz2, vz2⟩;@}
    {vx < vx2 ? AS ⟨vx+1, vx2, uy2, vy2, uz2, vz2⟩;@}
    {uy > uy2 ? AS ⟨ux2⌈ux, vx2⌊vx, uy2, uy-1, uz2, vz2⟩;@}
    {vy < vy2 ? AS ⟨ux2⌈ux, vx2⌊vx, vy+1, vy2, uz2, vz2⟩;@}
    {uz > uz2 ? AS ⟨ux2⌈ux, vx2⌊vx, uy2⌈uy, vy2⌊vy, uz2, uz-1⟩;@}
    {vz < vz2 ? AS ⟨ux2⌈ux, vx2⌊vx, uy2⌈uy, vy2⌊vy, vz+1, vz2⟩;@}
    splits
  }¨cubes
  {b ? cubes ∾↩ ⋈ux‿vx‿uy‿vy‿uz‿vz;0}

  @
}¨∾∘∾¨ inp

•Show +´{ux‿vx‿uy‿vy‿uz‿vz:(1+vx-ux)×(1+vy-uy)×1+vz-uz }¨cubes

 

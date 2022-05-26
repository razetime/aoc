#!/usr/bin/env cbqn

⟨_fix⟩ ← •Import "lib.bqn"

inp ← '0'-˜>•FLines "15.txt"

# part 1
r‿c ← ≢inp
incs ← ⟨0‿¯1, ¯1‿0, 0‿1, 1‿0⟩
InGrid ← {(𝕩≥0)∧○(∧´)𝕩<r‿c}
wts ← ⥊inp
edges ← ∾(↕×´≢inp)∾¨¨{{𝕩+c×𝕨}´¨InGrid¨⊸/𝕩⊸+¨incs}¨⥊↕≢inp

BellmanFord ← {
  𝕊 edges‿wts:
  dist ← 0»∞⥊˜r×c
  { 
    𝕊 𝕩:
    {
	  u‿v ← 𝕩⊑edges
	  wt ← v⊑wts
	  ud‿vd ← u‿v⊏dist
	  (∞≠ud) ∧ (wt+ud)<vd ? (𝕩+1)⊣dist (ud+wt)⌾(v⊸⊑)↩;
	  𝕩+1
	}⍟(≠edges) 0
	@
  }⍟(¯1+r×c) @
  dist
}

•Show ¯1⊑BellmanFord edges‿wts

# Part 2(port of ngn's k soln):
ninp ← 9⊸|⌾(-⟜1)∾(<inp)++⌜˜↕5

Ngn ← {𝕊 x:r‿c←≢𝕩,i←c⥊∞,¯1‿¯1⊑{𝕊 y:y⌊x+⌊´⟨i»y, i«y, ∞«˘y, ∞»˘y⟩}_fix 0⌾⊑ ∞⌈x}

•Show Ngn ninp
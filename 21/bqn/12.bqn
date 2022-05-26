#!/usr/bin/env cbqn

⟨Split⟩ ← •Import "lib.bqn"

inp ← '-'Split¨•FLines "12.txt"

# Part 1:
nodes ← ⍷∾inp
conns ←{(nodes⊐⊑¨𝕩)⊔¯1⊑¨𝕩}inp∾⌽¨inp

•Show ⟨⟩{
  𝕨 𝕊 "end": 1;
  next ← (⊑nodes⊐⋈𝕩)⊑conns
  +´(𝕨∾('a'≤⊑𝕩)⥊⋈𝕩)⊸𝕊¨ next(¬∘∊/⊣)𝕨
}"start"

# Part 2:
•Show ⟨"start"⟩ {
  𝕨 𝕊 "end": 1;
  w Find x:
  next ← (⊑nodes⊐⋈𝕩)⊑conns
  sum ← +´0=∊w(¬∘∊/⊣)⟨"start"⟩ 
  { 
    (x≡"start")∧w≢⟨"start"⟩ ? 0;
    sum > 1 ? 0;
    1=sum ? +´{(w∾('a'≤⊑x)⥊⋈x) Find 𝕩}¨next(¬∘∊/⊣)w;
    0=sum ? +´{(w∾('a'≤⊑x)⥊⋈x) Find 𝕩}¨next
  }
}"start"
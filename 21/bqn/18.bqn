#!/usr/bin/env cbqn

inp ← {•BQN'⟩'¨⌾((']'=𝕩)⊸/)'⟨'¨⌾(('['=𝕩)⊸/)𝕩}¨•FLines "18.txt"

Mag ← {𝕊 f‿s: +´3‿2×𝕊¨f‿s;𝕩}
Expr ← {val 𝕊 path : val{𝕏⌾(𝕨⊸⊑)}´path}
Dig ← {0=≡𝕩 ? 0; 1+𝕨 𝕊 𝕨⊑𝕩}

PathFind ← {
  PathFind 3‿path‿arr:
  path∾⊑/2=≠¨arr;
  PathFind depth‿path‿arr:
  ⊑⟨⟨⟩⟩∾˜(×≠¨)⊸/0‿1{1<≡𝕩 ? PathFind ⟨depth+1, path∾𝕨, 𝕩⟩;⟨⟩}¨arr;
  PathFind arr:
  PathFind ⟨0, ⟨⟩, arr⟩
}

Explode ← {
  𝕊 arr:
  path ← PathFind arr
  l‿r ←  arr⊑´⌽path
  left ← /path
  right ← /¬path
  _mod ← {
    b‿side func _𝕣 arr:
    ×≠side ?
    side ↩ (¬b)∾˜path↑˜¯1⊑side
    side ∾↩ b+/⋈ b Dig 𝕩⊑´⌽side
   (func Expr side){𝕎𝕩}𝕩;𝕩
  }
  (0 Expr path){𝕎𝕩}0‿right r⊸+ _mod 1‿left l⊸+ _mod arr
}

Split ← {
  done ← 0
  {
    done ? 𝕩;
    0<≡𝕩 ? 𝕊¨𝕩;
    0=≡𝕩 ? 𝕩≥10 ? done ↩ 1, (⌊⋈⌈)𝕩÷2;
    𝕩
  } 𝕩
}
Exb ← 4<≡
Spb ← ∨´9<∾⍟(-⟜1≡) 
 
Add ← { Split⍟((¬Exb 𝕩)⊸∧Spb) Explode⍟Exb 𝕩} •_while_ (Exb∨Spb) ⋈

# Part 1:
•Show Mag Add˜´⌽inp
# Part 2:
•Show ⌈´⥊Mag∘Add⌜˜inp
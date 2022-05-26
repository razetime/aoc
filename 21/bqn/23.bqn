#!/usr/bin/env cbqn

⟨Split, B2D, _base, Range, Pad, _fix, SR, MatMul⟩ ← •Import "lib.bqn"

inp ← >13↑¨•FLines "23t.txt"

ps ← "AABBCCDD"∾¨∾{(¯1⌈𝕩-'A')⊔↕≢𝕩}inp
plcs ← 1∾¨⟨1,2,4,6,8,10,11⟩

InPos ← {l‿r‿c:(c=3+2×l-'A')∧r>1}
Dist ← {r‿c 𝕊 r1‿c1: (|r-1)+(|r1-1)+|c-c1}
minScore ← ∞
cache ← ⟨⟩
res ← ⟨⟩
Print ← {g←(≢inp)⥊' ', g⊣{g (⊑𝕩)⌾((1↓𝕩)⊸⊑)↩}¨𝕩}

•Show 0{
  score Move pos:  (≠cache) > i ← ⊑⟨pos⟩⊐˜cache ? •Show score + i⊑res;
  #score Move pos:  score > minScore ? score; 
  score Move pos:  ∧´InPos¨pos ? minScore ⌊↩ score, score; 
  score Move pos:
  psn ← 1↓¨pos #just the postions.
  thing ← {
    InPos i ← 𝕩⊑pos ? 3=1⊑i ? #•Show 𝕩⊑pos, 
    minScore;
    ∧´InPos¨ pos/˜(⊑𝕩⊑pos)=⊑¨pos ? #•Show 𝕩⊑pos,
     minScore;
    3=1⊑i ← 𝕩⊑pos ? ⊑(⋈¯1‿0+1↓i)∊psn ? #•Show 𝕩⊑pos,
     minScore;
    𝕊 ind:
    l‿r‿c ← 𝕩⊑pos
    # •Show "poses now:"‿pos
    #•Show l‿r‿c
    lc ← ¯1⊑0∾c⊸>⊸/¯1⊑¨lr←∧(1=⊑¨)⊸/psn # leftmost column with a block
    #•Show lc
    rc ← ⊑12∾˜c⊸<⊸/¯1⊑¨rr←∧(1=⊑¨)⊸/psn   # rightmost column with a block
    #•Show rc
    Valid ← {𝕊 r‿c: (c>lc)∧c<rc}¨⊸/
    hall ← {1=r? ⟨⟩; Valid plcs}(¬∘∊/⊣)psn # visitable hallway positions
    room ← {∨´{𝕊 l1‿r1‿c1: (l1≠l)∧c1=3+2×l-'A'}¨pos ? ⟨⟩; Valid ((3+2×l-'A')∾˜¨2‿3)(¬∘∊/⊣)psn} # last room position visitable
    # •Show hall∾room
    #{score=0 ? •Show l∾"complete",@;@}
    ⌊´{
      s←score + (10⋆l-'A')×𝕩 Dist r‿c
      #•Show l‿r‿c⋈lc‿lr‿rc‿rr, •Show Print •Show pos∾⋈(l+32)∾𝕩, 
      #•Show "sc"‿s
      p ← (l∾𝕩)⌾(ind⊸⊑) pos
      ns ← s Move p
      cache ∾↩ ⟨p⟩
      res ∾↩ ns-s
      ns
    }¨ hall∾(-×≠room)↑room
  }¨↕≠pos
  # cache ∾↩ ⟨pos⟩
  # res ∾↩ thing
  •Show Print pos
  •Show pos/˜⌊´⊸= •Show thing
  
  •Show ⌊´thing
} ps

#•Show >cache Print⊸⋈¨res
•Show "min"‿minScore
l←•Import "../../lib.bqn"
i←1↓•FLines "../inp/07"

f←⟨"/"⟩
s←⟨0⟩
cd←"/"
{
  "$ cd .."≡𝕩 ?
    cd↑˜↩1+¯2⊑/'/'=cd
  ; "$ cd "≡5↑𝕩 ? 
    d←5↓𝕩
    cd∾↩d∾"/"
    f↩⍷f∾⋈cd
    s∾↩0
  ; "$ ls"≡4↑𝕩 ? @
  ; "dir "≡4↑𝕩 ? @
  ; ·:
    ds←l.Dec (⊑/' '=𝕩)↑𝕩
    s+↩ds×(⊑0∾˜⍷⟜cd)¨f
}¨i

•Show +´≤⟜100000⊸/s
un←30000000-70000000-⊑s
•Show ⌊´>⟜un⊸/s

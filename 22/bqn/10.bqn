l←•Import "../../lib.bqn"
i←∾{2=≠𝕩?"noop"⋈𝕩;⋈𝕩}¨(⋈⟜•BQN´' '⊸l.Split)¨•FLines "../inp/10"

x←1
[p1,p2]←⍉>(1+↕≠i){
  r←(⊑(x+↕3)∊˜40|𝕨)⊑" #"
  x+⍟(2=≠𝕩)˜↩1⊑𝕩
  ⟨𝕨×x×0=40|𝕨-20,r⟩
}¨i

•Show +´p1
•Show 6‿40⥊p2

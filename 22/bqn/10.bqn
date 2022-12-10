l←•Import "../../lib.bqn"
i←∾{2=≠𝕩?"noop"⋈𝕩;⋈𝕩}¨(⋈⟜•BQN´' '⊸l.Split)¨•FLines "../inp/10"

c←0
x←1
s←0
g←{
  c+↩1
  s+↩c×x×0=40|c-20
  r←(⊑(x+↕3)∊˜40|c)⊑" #"
  x+⍟(2=≠𝕩)˜↩1⊑𝕩
  r
}¨i

•Show s
•Show 6‿40⥊g

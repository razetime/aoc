l←•Import "lib.bqn"
i←•FLines "../inp/05"
c‿m←(<"")l.Split i
c↓˜↩¯1
c↩' '⊸≠⊸/¨(0‿1‿0‿0⥊˜≠⊑c)/<˘⍉>c
m{•BQN¨1‿3‿5⊏' 'l.Split𝕩}¨↩

_mv←{q‿f‿t 𝔽 _𝕣 𝕩: (𝔽q↑(f-1)⊑𝕩)⊸∾⌾((t-1)⊸⊑)(q⊸↓)⌾((f-1)⊸⊑)𝕩}
•Show ⊑¨c⌽_mv´⌽m
•Show ⊑¨c⊢_mv´⌽m

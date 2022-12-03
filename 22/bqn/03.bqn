l←•Import "lib.bqn"
i←•FLines "../inp/03"
s←⥊"aA"+⌜↕26
i↩1+s⊸⊐¨i

•Show +´{⊑l.I˝2‿∘⥊𝕩}¨i
•Show +´(⊑l.I´)˘∘‿3⥊i

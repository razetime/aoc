l←•Import "../../lib.bqn"
i←•FLines "../inp/04"
i↩{•BQN¨¨'-'l.Split¨','l.Split𝕩}¨i

•Show +´{⟨a‿b,c‿d⟩:((a≥c)∧(b≤d))∨((c≥a)∧(d≤b))}¨i

•Show +´0≠{⟨a‿b,c‿d⟩:≠(a+↕1+b-a)l.I c+↕1+d-c}¨i

# Day 5
⟨Split, range⟩ ← •Import "lib.bqn"

inp ← {{•BQN "⟩"∾˜"⟨"∾𝕩}¨0‿2⊏' '⊸Split𝕩}¨•FLines "5.txt"

# Part 1:
Count ← {{+´2≤≠¨𝕩⊔˜+`0∾≢´˘2↕𝕩}∧∾{<˘⍉>{(⌈´≠¨𝕩)⥊¨𝕩}Range¨´𝕩}¨𝕩}
•Show Count {𝕩/˜(∨´=´)¨𝕩}inp

# Part 2:
•Show Count inp
#!/usr/bin/env cbqn
⟨Split⟩ ← •Import "lib.bqn"

inp ← (•BQN ¯1⊑' '⊸Split)¨•FLines "21.txt"

# Part 1:
Scm ← (10×0⊸=)⊸+10⊸|
•Show ×´{((𝕩⊑˜¯2⊸+)⋈3⊸×)1+⊑/1000≤𝕩}⥊+`Scm inp+`∘‿2⥊6+9×↕400

# Part 2:
# Idea borrowed from reddit (thanks, 4HbQ)
•Show ⌈´{
  20<¯1⊑𝕩 ? 0‿1;
#!/usr/bin/env cbqn
⟨Split, B2D, _base, Range, Pad, _fix, SR, MatMul⟩ ← •Import "lib.bqn"

inp ← (•BQN ¯1⊑' '⊸Split)¨•FLines "21.txt"

# Part 1:
Scm ← (10×0⊸=)⊸+10⊸|
•Show ×´{((𝕩⊑˜¯2⊸+)⋈3⊸×)1+⊑/1000≤𝕩}⥊+`Scm inp+`∘‿2⥊6+9×↕400

# Part 2:
# Idea borrowed from reddit (thanks, 4HbQ)
•Show ⌈´{
  20<¯1⊑𝕩 ? 0‿1;
  Wins p1‿p2‿s1‿s2:
  +´1‿3‿6‿7‿6‿3‿1×{⌽Wins⟨p2,𝕩,s2,s1+𝕩⟩}¨Scm p1+3+↕7
}inp∾0‿0
  Wins p1‿p2‿s1‿s2:
  +´1‿3‿6‿7‿6‿3‿1×{⌽Wins⟨p2,𝕩,s2,s1+𝕩⟩}¨Scm p1+3+↕7
}inp∾0‿0

inp ← •BQN "⟩"∾˜"⟨"∾⊑•FLines "7.txt"

#Part 1:
MinSum ← ⌊´+´˘
•Show MinSum |-⌜˜inp

# Part 2:
•Show MinSum (1+↕⌈´inp)({2÷˜𝕩×𝕩+1}|∘-)⌜inp

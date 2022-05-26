⍝ day14: Bitmask

∇f
⍝ Part 1:
mod←{(' '(≠⊆⊢)⍵)[1 3]}¨inp
mask←''
mem←100000/0
{'mask'≡⊃⍵:mask⊢←⊃⌽⍵⋄mem⊢←((2⊥(0@(⍸'0'=mask))(1@(⍸'1'=mask))¯36↑2(⊥⍣¯1)⍎⊃⌽⍵)@(⍎¯1↓4↓⊃⍵))mem}¨mod
+/mem

⍝ Part 2:
a←⊃,/inp

mem←(2⊥1/⍨≢2(⊥⍣¯1)⌈/⍎¨{⍵/⍨×{≢⍵~'10'}¨⍵}a⊆⍨a∊⎕D)/0
inds←⍬

⍝ very very very inefficient, doesn't complete on my pc
{'mask'≡⊃⍵:mask⊢←⊃⌽⍵⋄n←('X'@(⍸'X'=mask))(1@(⍸'1'=mask))¯36↑2(⊥⍣¯1)⍎¯1↓4↓⊃⍵⋄r←≢¨'X'(=⊆⊢)n⋄num←2⊥¨{(⍵@(⍸'X'=n))n}¨(-+/'X'=mask)∘↑¨2(⊥⍣¯1)¨0,⍳1-⍨2*+/'X'=mask⋄mem←((⍎⊃⍵)@num)mem}¨mod
+/mem

⍝ Different idea, times out on tio
mem←⍬

{'mask'≡⊃⍵:mask⊢←⊃⌽⍵⋄n←('X'@(⍸'X'=mask))(1@(⍸'1'=mask))¯36↑2(⊥⍣¯1)⍎¯1↓4↓⊃⍵⋄r←≢¨'X'(=⊆⊢)n⋄num←2⊥¨{(⍵@(⍸'X'=n))n}¨(-+/'X'=mask)∘↑¨2(⊥⍣¯1)¨0,⍳1-⍨2*+/'X'=mask⋄w←⍎⊃⌽⍵⋄{x←⍵∊⊃¨mem:mem←((⊂⍵,w)@(⍸x))mem⋄mem⊢←mem,⊂⍵,w}¨num}¨mod
∇
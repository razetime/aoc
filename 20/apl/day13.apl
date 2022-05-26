⍝ Day 13: Timing
⍝ Was really late on this one

∇f
⍝ Part 1
r←1000067
s←'17,x,x,x,x,x,x,x,x,x,x,37,x,x,x,x,x,439,x,29,x,x,x,x,x,x,x,x,x,x,13,x,x,x,x,x,x,x,x,x,23,x,x,x,x,x,x,x,787,x,x,x,x,x,x,x,x,x,41,x,x,x,x,x,x,x,x,19'
x←0
t←{⍵/⍨×⍵}⍎¨u←','(≠⊆⊢)s
(b/t)×|r-c/⍨b←(⊢=⌊/)c←{{⊃⍵/⍨r<⍵}⍵×⍳⌈/⌈r÷t}¨t


⍝ Part 2
⍝ Chinese Remainder Theorem
off←1-⍨⍸×⍎¨u
⍝ APLcart cnippet used for finding the values.
⍝ generates stuff very, very fast.
t{m|⍵+.×⍺(⊣×⊢|∘⊃{0=⍵:1 0 ⋄ (⍵∇⍵|⍺)+.×0 1,⍪1,-⌊⍺÷⍵})¨⍨⍺÷⍨m←×/⍺}t-off
∇
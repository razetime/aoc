⍝ Day 23: Shuffling stuff

⎕IO←0
∇f
⍝ Part 1: pretty simple
a←⍎¨⍕157623984 ⍝ Input
current←⊃a
out←{n←⍵[9|(1+⍳3)+⍵⍳current]⋄l←(⍵~n)⋄current=⌊/l:{o←((1+l⍳(⌈/l))↑l),n,(1+l⍳(⌈/l))↓l⋄current⊢←o[9|1+o⍳current]⋄o}0⋄{o←(i↑l),n,(i←6|1+l⍳⌈/l/⍨current>l)↓l⋄current⊢←o[9|1+o⍳current]⋄o}0}⍣100⊢a
' '~⍨⍕0~⍨(⊃∘⌽,⊃)1(≠⊆⊢)out,0

⍝ Part 2: not sure how to implement efiiciently. Looks like it needs a linked list.

∇
⍝ Day 10: consecutive differences
⍝ there's probably an easier/more APL-like way to do part 2

⎕FR←1287
⎕PP←34 ⍝ final answer is pretty huge
⎕IO←0
∇f
a←105 78 37 153 10 175 62 163 87 22 24 92 46 5 115 61 124 128 8 60 17 93 166 29 90 148 113 55 141 134 79 101 49 133 38 53 33 30 66 159 23 132 145 147 121 94 146 21 135 56 176 118 44 138 85 169 111 9 1 83 36 59 140 149 160 43 131 69 2 25 84 39 28 171 172 100 18 15 114 70 86 97 155 152 40 122 77 16 11 170 52 45 139 76 102 63 54 142 14 158 80 154 112 91 108 73 127 123 

⍝ Part 1
x←(⊂∘⍋⌷⊢)0,a
a←x,3+⊢/x
b←2-/a
(+/¯1=b)×(+/¯3=b)

⍝ Part 2:
⍝ Port of ASCII-only's solution: - https://hackmd.io/mXLe6RTIQkezA3lJIjAssw?view#day-11
c←1,(1-⍨≢a)/0
{r←0⋄w←⍵⋄m←0⊣{(a[w]-a[⍵])∊1↓⍳4:r+←c[⍵]⋄0}¨⍳⍵⋄c⊢←(r@⍵)c}¨1↓⍳≢a
⊢/c
∇
⍝ Card game

∇f

⍝ Part 1:
p1←6 25 8 24 30 46 42 32 27 48 5 2 14 28 37 17 9 22 40 33 3 50 47 19 41
p2←1 18 31 39 16 10 35 29 26 44 21 7 45 4 20 38 15 11 34 36 49 13 23 43 12

win←p1{∨/0=≢¨⍺⍵:{⍵/⍨×≢¨⍵}⍺⍵⋄(⊃⍺)>⊃w:((1⌽⍺),⊃w)∇1↓w⋄(1↓⍺)∇(1⌽w),⊃⍺}p2
+/(⍳≢win)×⌽win

⍝ Messy version I initially used:
{(⊃p1)>(⊃p2):p2⊢←1↓p2⊣p1⊢←(1↓p1),(⊃p1),(⊃p2)⋄p1⊢←1↓p1⊣p2⊢←(1↓p2),(⊃p2),(⊃p1)}⍣{∨/0=(≢p1)(≢p2)}0
+/(⍳≢p1)×⌽p1


⍝ Part 2 - took a while to figure out.
p1{prev←2⊃⍵⋄ ⍝ Find ing a way to do this part correctly took most of my time.
w←⊃⍵⋄
g←∇⋄
(⊂⍺w)∊prev:1⋄ ⍝ halt if a loop is found
∨/0=(≢⍺)(≢w):⍺{0=≢⍺:2⊣⎕←⍵⋄1⊣⎕←⍺}w⋄ ⍝ halt of any of the inputs has not values
∧/{(⊃⍵)≤≢1↓⍵}¨⍺w:⍺{1=((⊃⍺)↑1↓⍺)g((⊃⍵)↑1↓⍵)(⍬):((1⌽⍺),⊃⍵)g(1↓⍵)(prev)⋄(1↓⍺)g((1⌽⍵),⊃⍺)(prev)}w⋄ ⍝ inner game maker
(⊃⍺)>⊃w:((1⌽⍺),⊃w)∇(1↓w)(prev,⊂⍺w)⋄(1↓⍺)∇((1⌽w),⊃⍺)(prev,⊂⍺w) ⍝ general game rule.
}(p2)(⍬)

p1{prev←2⊃⍵⋄w←⊃⍵⋄g←∇⋄(⊂⍺w)∊prev:1⋄∨/0=(≢⍺)(≢w):⍺{0=≢⍺:2⊣⎕←⍵⋄1⊣⎕←⍺}w⋄∧/{(⊃⍵)≤≢1↓⍵}¨⍺w:⍺{1=((⊃⍺)↑1↓⍺)g((⊃⍵)↑1↓⍵)(⍬):((1⌽⍺),⊃⍵)g(1↓⍵)(prev)⋄(1↓⍺)g((1⌽⍵),⊃⍺)(prev)}w⋄(⊃⍺)>⊃w:((1⌽⍺),⊃w)∇(1↓w)(prev,⊂⍺w)⋄(1↓⍺)∇((1⌽w),⊃⍺)(prev,⊂⍺w)}(p2)(⍬)
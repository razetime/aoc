⍝ Day 15: a simple game
⍝ 

∇f
inp←1,17,0,10,18,11,6
m←inp
{1<+/a←(⊢/m)=m:m⊢←m,|⊢/-/¯2↑⍸a⋄m⊢←m,0}¨⍳2020
m[2020]

⍝ Part 2
⍝ Just really dumb brute force, eats a lot of memory
⍝ I should try 2 index memoization later
⎕FR←1287
⎕PP←34
⎕SH 'export MAXWS=2G'
inp←1,17,0,10,18,11,6

({1<+/a←(⊢/⍵)=⍵:⍵,|⊃-/¯2↑⍸a⋄⍵,0}⍣30000000⊢inp)[30000000]

∇

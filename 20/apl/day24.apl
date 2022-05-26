⍝ Day 24: Hexagons!

a←⊃⎕NGET'day24inp.txt' 1
dirs←(¯1 0)(¯1 ¯1)(0 ¯1)(0 1)(1 0)(1 1)
dirns←'ne' 'nw' (,'w') (,'e') 'sw' 'se'
grid←300 300⍴0

⍝ Part 1:
{pos←150++/dirs[dirns ⍳' '(≠⊆⊢)('[ns]?[ew]'⎕R{' ',⍵.Match})⍵]⋄grid[pos]⊢←~grid[pos]}¨a
+/∊grid

⍝ Part 2:
+/,({s←+/(,⍵)[1 2 4 5 6 8 9]⋄⍵[⊂2 2]:s∊1+⍳2⋄s=2}⌺3 3)⍣100⊢grid
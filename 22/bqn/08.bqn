# Same as jayfoad's one here: https://www.reddit.com/r/adventofcode/comments/zfpnka/2022_day_8_solutions/izd768u/
# A direct translation of my lil would be awful.
i←>'0'-˜•FLines "../inp/08"
F←{𝕩>¯1∾˘⌾⍉¯1↓⌈`𝕩}
•Show +´⥊(F∨F⌾⌽){(𝔽∨𝔽⌾⍉)𝕩}i 
G←{(⌽↕≠𝕩)⌊1++´˘∧`˘(1+↕≠𝕩)⌽˘>⌜˜𝕩}⎉1
•Show ⌈´⥊(G×G⌾(⌽˘)){(𝔽×𝔽⌾⍉)𝕩}i

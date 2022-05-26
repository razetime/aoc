⍝ Day 1: product of numbers which sum to 2020

⍝ First Star
{×/⊃{⍵/⍨2020=+/¨⍵},∘.,⍨⍵}

⍝ second star
CY 'dfns'
{×/⊃{⍵/⍨2020=+/¨⍵}↓3 cmat ⍵} ⍝ should find a more efficient solution
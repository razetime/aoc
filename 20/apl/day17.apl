⍝ Day 17: Multidimensional life
⍝ This was almost a chore

∇f
inp←'#'=↑'##..####' '.###....' '#.###.##' '#....#..' '...#..#.' '#.#...##' '..#.#.#.' '.##...#.'

⍝ Part 1
+/∊{{2 2 2⌷⍵:(+/∊⍵)∊3 4⋄3=+/∊⍵}⌺3 3 3⊢0⍪⍨0⍪↑{0∘,∘⌽∘⍉⍣4⊢↑⍵}¨↓↓⍵}⍣6⊢{(1,⍴⍵)⍴⍵}inp

⍝ Part 2
⍝ part 1 but with a better padding function (Thanks Bubbler)
+/∊{{2 2 2 2⌷⍵:(+/∊⍵)∊3 4⋄3=+/∊⍵}⌺3 3 3 3⊢(2 3 4 1⍉0,,∘0)⍣4⊢⍵}⍣6⊢{(1,1,⍴⍵)⍴⍵}inp
∇
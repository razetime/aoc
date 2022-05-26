#!/usr/bin/env cbqn

⟨Split⟩ ← •Import "lib.bqn"

⟨pat⟩‿strs ← "" <⊸Split •FLines "14.txt"
elems‿trans ← <˘⍉>{0‿2⊏' 'Split𝕩}¨ strs

# Part 1:
•Show (⌈´-⌊´)/⁼∘⊐∧{∾𝕩∾¨⟨""⟩∾˜trans⊏˜elems⊐<˘2↕𝕩}⍟10 pat

# Part 2(works for part 1 as well):
npair ← trans{𝕨 𝕊 a‿b: elems⊐⟨a∾𝕨,𝕨∾b⟩}¨elems # indices of resultant pairs
chars ← ⍷elems∾○∾trans # all unique chars
occs ← +˝pat=⌜chars # occurrence count of each char
letinds ← chars⊐∾trans # indices of translated letters

•Show (⌈´-⌊´)⊑{
  𝕊 n‿x:
  new ← /⋈≠x
  fil ← ×⊸/x
  (2/fil){new 𝕨⊸+⌾(𝕩⊸⊑)↩}¨∾npair/˜×x
  fil{n 𝕨⊸+⌾(𝕩⊸⊑)↩}¨letinds/˜×x
  n‿new
}⍟40 ⟨occs, +´˘elems≡⌜<˘2↕pat⟩
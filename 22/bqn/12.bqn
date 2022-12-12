l←•Import "../../lib.bqn"
i←>•FLines "../inp/12"

q1←l.Fi 'S'=i
q2←l.Fi i∊"Sa"
e←⊑l.Fi 'E'=i
pi←"az"⌾((q1∾⋈e)⊸⊑)i

cm←{∞×2≤𝕩⊸-¨⟨@»˘𝕩,@«˘𝕩,@»˘⌾⍉𝕩,@«˘⌾⍉𝕩⟩}pi
Move←{𝕩⌊⌊´cm⌈1+⟨∞»˘𝕩,∞«˘𝕩,∞»˘⌾⍉𝕩,∞«˘⌾⍉𝕩⟩}
Part←{
  wts←0¨⌾(𝕩⊸⊑)(≢pi)⥊∞
  e⊑Move l._fix wts
}

•Show Part q1
•Show Part q2

#!/usr/bin/env cbqn

⟨B2D, _base⟩ ← •Import "lib.bqn"

inp ← ∾(¯4⊸↑2 _base)¨"0123456789ABCDEF"⊐⊑•FLines "16.txt"

# Part 1:
ptr ← 0
sum ← 0
RB ← {ptr +↩ 𝕩, inp⊏˜(ptr-𝕩)+↕𝕩}

GetPkt ← {
  GetPkt a‿b‿c: GetPkt @; # If given a packet value, ignore it.
  GetPkt @: # Read header and redirect to correct packet
  sum +↩ ⊑d ← (B2D RB)¨ 3‿3
  GetPkt d;
  GetPkt v‿4: # normal packet
  val ← B2D {0=⊑RB 1? 𝕩∾RB 4; 𝕊𝕩∾RB 4} ⟨⟩
  ⟨v, 4, val⟩; 
  GetPkt v‿t: # operator packet
  data ← {
    ⊑RB 1 ? GetPkt ⍟ (1+↕B2D RB 11) @;
	l ← ptr + B2D RB 15
	res ← ⟨⟩
    {⊑res ∾↩ ⋈GetPkt 𝕩} •_while_ {𝕊:ptr<l} @
	res
  }
  ⟨v, t, data⟩
} 

expr ← GetPkt @
•Show sum

# Part 2:
•Show {
  𝕊 v‿4‿dat: dat;
  𝕊 v‿t‿dat:
  t◶+‿×‿⌊‿⌈‿⊢‿>‿<‿=´𝕊¨dat
} expr

⟨Split⟩ ← •Import "lib.bqn"

inp ← (' 'Split¨'|'⊸Split)¨•FLines "8.txt"

# Part 1:
•Show +´2‿4‿3‿7∊˜≠¨∾¯1⊑¨inp

# Part 2:
•Show +´{
  𝕊 d‿n:
  masks ← "abcdefg"⊸∊¨d
  on‿fo‿se‿ei ← masks⊏˜2‿4‿3‿7⊐˜+´¨masks # 1,4,7,8  # Part 1 idea
  si ← ⊑{(ei≢𝕩)∧ei≡on∨𝕩}¨⊸/masks                    # 6: 1 and 6 combined makes 8
  fi ← ⊑{(ei≢𝕩)∧1=+´si≠𝕩}¨⊸/masks                   # 5: single place difference with 6 and isn't 8
  ni ← ⊑{(si≢𝕩)∧(𝕩≡𝕩∨fo)∧1=+´ei≠𝕩}¨⊸/masks          # 9: not 6 and single place difference with 8
  ze ← ⊑(6=+´)¨⊸/masks(¬∘∊/⊣)ni‿si                  # 0: not 9 and not 6 and contains 6 segments
  tw ← ⊑{(se≢𝕩)∧4=+´fi≠𝕩}¨⊸/masks                   # 2: 2 places not common with 5 and isn't 7
  th ← ⊑masks(¬∘∊/⊣)⟨ze,on,tw,fo,fi,si,se,ei,ni⟩    # 3: just remove the others
  {𝕩+10×𝕨}˜´⌽(∧¨1↓n)⊐˜/⟜"abcdefg"¨⟨ze,on,tw,th,fo,fi,si,se,ei,ni⟩
}¨inp
l←•Import "../../lib.bqn"
i←(<"") l.Split •FLines "../inp/11"
Parse←{
  ·‿s‿o‿ts‿tr‿fa:
  it⇐(l.Dec 1⊸↓)¨','l.Split 17↓s
  Sit⇐{𝕊:it↩𝕩}
  fi‿se‿th←{'o'=⊑𝕩?⊢;"+":+;"*":×;l.Dec 𝕩}¨' ' l.Split 19↓o
  Op⇐Fi Se Th
  tst⇐l.Dec 21↓ts
  t⇐l.Dec 29↓tr
  f⇐l.Dec 30↓fa
  sc⇐0
  Isc⇐{𝕊:sc+↩𝕩}
}¨
i1←Parse i
i2←Parse i

_part←{
  times Trunc _r inp:
  {
    𝕊:
    {
      new←Trunc 𝕩.Op 𝕩.it
      m←0=𝕩.tst|new
      tl←m/new
      fl←m¬⊸/new
      t←𝕩.t⊑inp
      f←𝕩.f⊑inp
      t.Sit t.it∾tl
      f.Sit f.it∾fl
      𝕩.Sit ⟨⟩
      𝕩.Isc ≠new
    }¨inp
  }⍟times @
  ×´2↑∨{𝕩.sc}¨inp
}

•Show 20 (⌊÷⟜3) _part i1
•Show 10000 (×´{𝕩.tst}¨i2)⊸| _part i2


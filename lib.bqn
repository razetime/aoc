# Helper Functions
⟨Split, B2D, _base, Range, Pad, _fix, SR, MatMul, I, D, Dec, nl, Fi⟩⇐

Split←((⊢-˜+`×¬)∘(≡¨)⊔⊢)
B2D←{𝕩+2×𝕨}˜´⌽ # Binary to Decimal
_base←{⌽𝕗|⌊∘÷⟜𝕗⍟(↕1+·⌊𝕗⋆⁼1⌈⊢)} # Base conversion(bqncrate)
Range←{𝕨+(×a)×↕1+|a←𝕩-𝕨}
Pad←{⌽⍉𝕨∾˘𝕩}⍟4
_fix←{𝔽∘⊢⍟≢⟜𝔽_𝕣∘⊢⍟≢⟜𝔽𝕩}
SR←•Show •Repr
MatMul←+˝∘×⎉1‿∞
I←∊/⊣
D←¬∘∊/⊣
Dec←10⊸×⊸+˜´∘⌽-⟜'0'
nl←@+10
Fi←⊢/○⥊↕∘≢

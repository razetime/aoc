⍝ Day 2: String processing
⍝ getting proper input took longer than it should've

⍝ Part 1
∇f
⎕←+/{r l s←' '(≠⊆⊢)⍵⋄l←l~':'⋄x←+/l=s⋄r←⍎¨'-'(≠⊆⊢)r⋄(x≤⊃⌽r)∧x≥⊃r}¨(⎕UCS 10)(≠⊆⊢)⎕
∇

⍝ Part 2 
∇f
⎕←+/{r l s←' '(≠⊆⊢)⍵⋄l←l~':'⋄x←+/l=s⋄r←⍎¨'-'(≠⊆⊢)r⋄1=+/s[r]=l}¨(⎕UCS 10)(≠⊆⊢)⎕
∇
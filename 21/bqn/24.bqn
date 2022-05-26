#!/user/bin/env cbqn

⟨Split, B2D, _base, Range, Pad, _fix, SR, MatMul⟩ ← •Import "lib.bqn"

inp ← ({𝕊 a‿b‿c: ⟨
  {"add": +; "sub": -; "mul": ×; "div": ÷; "mod": |; "eql": =; "inp": ¬}}
  ⊑b-'w'
  •BQN c
⟩}' '⊸Split)¨•FLines "24t.txt" 




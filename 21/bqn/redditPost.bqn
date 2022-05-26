#!/usr/bin/env cbqn

day ← ⊑•args

code ← (⊣∾(@+10)∾⊢)´ "    "⊸∾¨ •FLines day ∾ ".bqn"

•Out "# [BQN](https://mlochbaum.github.io/BQN/)

BQN is a modern array language similar to APL.

" ∾ code ∾ "

[All Solutions so far](https://github.com/razetime/AOC2021-BQN)

The idea of this is to
"

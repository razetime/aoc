inp =:  cutopen 1!:1 < (_8 }. > {: (4!:3) '') , 'inp/08'

NB. Part 1
tot =. +/ > {{
  echo y
  cnt =. 0
  i =. 0
  while. i < # y do.
    if. '\' = i { y do.
      if. ((i + 1) { y) e. '"\' do.
        i =. i + 1
      elseif.((i + 1) { y) = '' do.
        i =. i + 3
      end.
    end.
    i =. i + 1
    cnt =. cnt + 1
  end.
  cnt - 2
}} each inp

echo tot -~ +/ > # each inp

p2 =. {{
  2 + (# y) + (+/ '"' = y) + +/ '\' = y
}} 
NB. echo p2 '"abc"'
echo (+/ > # each inp) -~ +/ > p2 each inp

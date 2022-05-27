in =: >cutopen 1!:1 <'../inp/05'

c1 =: {{
  prs =. 2 ]\ y
  (2 < +/ 'aeiou' e.~ y) *. (+./ =/"1 prs) *. -. +./ ('ab';'cd';'pq';'xy') e. <"1 prs
}}

c2 =: {{
  prs =. 2 <\ y
  NB.}"1 
  (+./ {{ 1 < ({: - {.) I. y }}"1 > -:&.>/~ prs) *. +./ y = '  ', _2 }. y
}}

echo +/c1"1 in
echo +/c2"1 in
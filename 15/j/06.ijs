require 'strings'
in =: cutopen 1!:1 < (_8 }. > {: (4!:3) '') , 'inp/06'
Adjust =: {{ (u x { y) x} y }} NB. from elcaro

NB. Part 1
cmd =: 'turn off' ; 'turn on' ; 'toggle'
fun =: ([ *. -.@])`+.`~:
grd =: 1000 1000 $ 0
{{ 
for_y. in do.
  app =. fun {~ 1 i.~ {."1 > cmd E. each y
  'o p' =. 0 ". each each ',' splitstring each 1 0 1 # _3 {. ' ' splitstring dtb > y
  o =. >o
  p =. >p
  grd =: grd (app`:6) 1000 1000 {. (-p+1) {. (1+p-o) $ 1
end.
}} 0

echo +/ , grd

NB. Part 2
grd =: grd * 0
{{
for_y. in do.
  app =. _1 1 2 {~ 1 i.~ {."1 > cmd E. each y
  'o p' =. 0 ". each each ',' splitstring each 1 0 1 # _3 {. ' ' splitstring dtb > y
  o =. > o
  p =. > p
  grd =: 0 >. grd + app * 1000 1000 {. (-p+1) {. (1+p-o) $ 1
end.
}}0

echo +/ , grd
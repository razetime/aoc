require 'strings'
perm=: i.@! A. i.
inp =: >{{
  'a b' =.  ' = ' splitstring y
  's e' =. ' to ' splitstring a
  s ; e ; 0 ". b
}} each cutopen 1!:1 < (_8 }. > {: (4!:3) '') , 'inp/09'

prs =: 2 {."1 inp
uniq =: ~. , prs
echo uniq
wts =: _,~> {:"1 inp
NB. echo prs
NB. echo wts
prms =. {{ y {~ perm # y }} uniq
NB. echo 2 {. prms
all =: {{ +/ wts {~ prs i. 2 ]\ y}}"1 prms
NB. echo  2 {. all
echo  <./ all 
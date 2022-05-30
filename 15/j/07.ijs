require 'strings'

inp =: {{' ' splitstring y}} each cutopen 1!:1 < (_8 }. > {: (4!:3) '') , 'inp/07'

AND =:  {{256 | x 17 b. y}}  NB. 16+#.0 0 0 1
OR =:  {{256 | x 23 b. y}}  NB. 16+#.0 1 1 1
NOT =: {{256 | x 26 b. y}}  NB. 16+#.1 1 0 0
LSHIFT =: {{256 | x 33 b.~ y}} NB. see http://www.jsoftware.com/help/release/bdot.htm
RSHIFT =: {{256 | x (33 b.~ -) y}}
nms =: >{: each inp
exps =: _2 }. each inp
NB. All mult be done with 256 |
ila =: e.&'abcdefghijklmnopqrstuvwxyz'
{{
  que =. <y 
  fin =. ''
  vis =. ''
  while. 0 < # que do.
    y =. > {. que
    vis =. vis , < y
    que =. 1 }. que
    exp =. >exps {~ nms i. <y
    NB. echo y;exp
    que =. que , vis -.~ exp #~ > {{ila {. y}} each exp
    fin =. fin ,~ LF ,~ y , ' =. ' , ' ' joinstring exp
    NB. echo que
  end.
  NB. echo que  
  fin
  }},'a'

(<'out7') 1!:2~ ord 
3 : ord,LF,'a'
NB. echo a
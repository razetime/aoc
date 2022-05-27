require 'strings'

inp =: /:~ cutopen 1!:1 < (_8 }. > {: (4!:3) '') , 'inp/07'

AND =:  17 b.  NB. 16+#.0 0 0 1
OR =:   23 b.  NB. 16+#.0 1 1 1
NOT =: 26 b.  NB. 16+#.1 1 0 0
LSHIFT =:  33 b.~ NB. see http://www.jsoftware.com/help/release/bdot.htm
RSHIFT =:  33 b.~ -

{{
for_i. {{ ' =. ' joinstring |. '->' splitstring y }} each inp do.
  ". >i
end.
echo a
}}0
inp =: 'ckczppom'
md5 =: 15&(128!:6)
fun =:{{
  i =. x
  s =. y $ '0' 
  while. -. s -: y {. md5 inp , ": i do.
    i =. i + 1
  end.
  i
}} 

echo 1 fun 5
echo 117946 fun 6
in =: 1!:1 <'../inp/03'
mvs =: 1j0 _1j0 0j1 0j_1 {~ '><^v' i. in
echo +/ ~: +/\ 0j0 , mvs
echo +/ ~: , (+/\"1) 0j0 ,"1 |: ((2 %~ # mvs) , 2) $ mvs
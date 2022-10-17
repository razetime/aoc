# reference impl.
def chk(y)
 m=/(.)(.)\2\1/.match(y);m&&!(/(.)\1{3}/.match(m[0]))
end
l =$<.select{|x|
 x=x.chomp
 l=x.scan(/[^\[\]]+/)
 e=l.select.with_index{|x,i|i%2==0}
 o=l-e
 eb=e.any?{|y|chk(y)}
 ob=o.all?{|y|!chk(y)}
 eb&ob
}
puts l.size

str_a = gets(" ")
str_b = gets()

if str_a.to_i < str_b.to_i then
  print "a < b\n"
elsif str_a.to_i > str_b.to_i then
  print "a > b\n"
elsif str_a.to_i == str_b.to_i then
  print "a == b\n"
end

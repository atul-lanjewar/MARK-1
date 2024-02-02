x<-23
if(as.integer(x)){
  print("x is an integer")
}else
{
  print("x is not an integer")
}

y<-c("hardwork","is","the","key","to","success")
y
if("ram"%in%y){
  print("key is present")
}else
{
  print("key is absent")
}

marks<-45
if(marks>75){
  print("first class")
}else if(marks>65){
  print("second class")
}else if(marks>54){
  print("third class")
}else{
  print("fail")
}
#function 1
function_1<-function(){
  for(i in 1:6){
    print(i^2)
  }
}

function_1()

#function_2
function_2<-function(x,y,z){
  res<-3*4*5
  print(res)
}

function_2(x=3,y=4,z=5)

#function_3
function_3<-function(x=5,y=6){
  res<-x*y
  print(res)
}

function_3(3,4)
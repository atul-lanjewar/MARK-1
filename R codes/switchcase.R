#by index
x<-switch(3,
          "ram",
          "shyam",
          "mohan",
          "sumit"
          )
print(x)

#by matching values
y<-"34"
x<-switch(y,
          "4"="ram",
          "34"="shyam",
          "43"="mohan",
          "98"="sumit"
          )
print(x)
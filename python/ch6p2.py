sub1=int(input("enter marks of sub 1:\n"))
sub2=int(input("enter marks of sub 2:\n"))
sub3=int(input("enter marks of sub 3:\n"))

if(sub1<33 or sub2<33 or sub3<33):
    print("you are failed because you cannot passed 33 percent criteria")
elif(sub1+sub2+sub3)/3<40: 
    print("you are failed because of total 40 percent criteria")   
else:
    print("you are passed")
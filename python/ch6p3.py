from operator import truediv


text=input("enter the text\n")

if("make a lot of money"in text):
    spam=True
elif("subscribe this"in text):
    spam=True
elif("buy now"in text):
    spam=True
elif("click this"in text):
    spam=True            
else:
    spam=False

if(spam):
    print("it's a spam")
else:
    print("it's not a spam")    
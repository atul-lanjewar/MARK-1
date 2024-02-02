letter='''Dear <|NAME|>,
greetings from microsoft,
you are selected,
date:<|DATE|>'''
name=input("enter yoyr name\n")
date=input("enter date\n")
letter=letter.replace("<|NAME|>",name)
letter=letter.replace("<|DATE|>",date)
print(letter)

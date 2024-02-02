myDict={
    "fast":"a quick runner",
    "guy":"a coder",
    "atul":[1,2,3],
    "anotherdict":{"wifi":"jio"},
    1:2 
}

# print(myDict['fast'])
# print(myDict['guy'])
# myDict['atul']=[23,45]
# print(myDict['atul'])
# print(myDict['anotherdict']['wifi'])
# print(list(myDict.keys()))
# print(myDict.values())
# print(myDict.items())
print(myDict)
updatedict={
    "atul":"ironman",
    "surendar":"chutiya",
    3:6
}

myDict.update(updatedict)
print(myDict)
print(myDict.get("atul"))
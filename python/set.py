a=set()
print(a)

a.add(4)
a.add(5)
a.add((1,2,3))
print(a)
a.remove(5)
print(a)
print(a.intersection({4,13}))
print(a.union({4,13}))

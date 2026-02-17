x=input("Enter your string:")
y=x.split()
print(y)
l=[]
for i in y:
    a=i[1:]
    l.append(a)
print(l)
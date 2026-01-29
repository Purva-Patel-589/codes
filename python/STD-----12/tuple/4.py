L=[]

x=int(input("Enter the no. of students:"))
for i in range(x):
    l=[]
    r=int(input("Enter the roll no.:"))
    l.append(r)
    n=input("Enter the name.:")
    l.append(n)
    m=int(input("Enter the marks:"))
    l.append(m)
    d=tuple(l)
    L.append(d)
print(tuple(L))


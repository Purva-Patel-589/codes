L=[]

for i in range(5):
    l=[]
    r=int(input("Enter the marks:"))
    l.append(r)
    n=input("Enter the marks:")
    l.append(n)
    m=int(input("Enter the marks:"))
    l.append(m)
    d=tuple(l)
    L.append(d)
print(tuple(L))
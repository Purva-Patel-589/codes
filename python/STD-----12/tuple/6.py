L=[]
A=[]

for i in range(5):
    l=[]
    r=int(input("Enter the marks:"))
    l.append(r)
    n=int(input("Enter the marks:"))
    l.append(n)
    m=int(input("Enter the marks:"))
    l.append(m)
    w=sum(l)
    L.append(w)
    a=w/3
    A.append(a)

print("Total marks:",tuple(L))
print("Avg marks:",tuple(A))

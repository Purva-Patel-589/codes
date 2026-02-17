L=[]
x1=0
L.append(x1)
x2=1

for i in range(8):
    L.append(x2)
    x1,x2=x2,x1+x2

print(tuple(L))
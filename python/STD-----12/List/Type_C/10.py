L=[]
x1=0
L.append(x1)
x2=1

for i in range(21):
    L.append(x2)
    x1,x2=x2,x1+x2

print(L)

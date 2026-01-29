L2=[]
for i in range(8):
    a=i*i
    L2.append(a)
print(tuple(L2))

L3=[]
for i in range(97,123):
    a1=chr(i)
    L3.append(a1)
for j in range(len(L3)):
    L3[j]=L3[j]*(j+1)
print(tuple(L3))
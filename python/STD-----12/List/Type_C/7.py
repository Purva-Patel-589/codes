L1=[]
for i in range(50):
    L1.append(i)
print(L1)


L2=[]
for i in range(8):
    a=i*i
    L2.append(a)
print(L2)


L3=[]
for i in range(97,123):
    a1=chr(i)
    L3.append(a1)
for j in range(len(L3)):
    L3[j]=L3[j]*(j+1)
print(L3)
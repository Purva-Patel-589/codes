L=[1,2,3,4,1,1,3,5,3,2]
L1=[]
L.reverse()
for i in L:
    while L.count(i)>1:
        L.remove(i)
        L1.append(i)
L.reverse()
L1.reverse()
print(L+L1)
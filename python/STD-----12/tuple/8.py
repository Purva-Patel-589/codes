L=["Atmiya","Vidya","Mandir"]
L1=[]
for i in L:
    L1.append(len(i))
L1.sort()
for j in L:
    if len(j)==L1[0]:
        print(j)



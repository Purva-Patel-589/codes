L=["Atmiya","Vidya","Mandir"]
M=0
ans=''
for string in L:
    if len(string)>M:
        M=len(string)
        ans=string
print(ans)

n=2
L1=[1,2,3]
L2=[]
for i in range(len(L1)):
    x=L1[i]+n
    L2.append(x)
print(L2)

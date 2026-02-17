p=((2,5),(4,2),(9,8),(12,10))
t=[]
for i in p:
    if i[0]%2==0 and i[1]%2==0:
         t.append(i)
print(len(t))

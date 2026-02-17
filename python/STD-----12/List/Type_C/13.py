L=[]
L1=[]
y=int(input("How many no. you want to add to the list:"))
for i in range(y):
    x=int(input("Enter your number:"))
    L.append(x)
print(L)
a=int(input("Enter your range no. (starting):"))
b=int(input("Enter your range no. (ending):"))
for j in range(a,b+1):
    L1.append(L[j])
print(max(L1))
print(min(L1))
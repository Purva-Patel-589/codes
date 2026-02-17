L=[]
L1=[]
y=int(input("How many no. you want to add:"))

for i in range(y):
    x=int(input("Enter your number:"))
    L.append(x)
print(tuple(L))

a=int(input("How many no. you want to add:"))

for j in range(a):
    b=int(input("Enter your number:"))
    L1.append(b)
print(tuple(L1))

print(tuple(L+L1))
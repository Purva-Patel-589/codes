n=input("Enter a number: ")

sum=0
temp=n
length=len(n)
for i in n:
    sum+=int(i)**length
if sum==int(temp):
    print("Armstrong Number")
else:
    print("Not an Armstrong Number")
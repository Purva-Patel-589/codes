n=input("Enter a number: ")
sum=0
temp=n
length=len(n)
for i in n:
    sum+=int(i)**length
if sum==int(temp):
    if n==n[::-1]:
        print("Armstrong Number and Palindrome")
    else:
        print("Armstrong Number but Not a Palindrome")
else:
    if n==n[::-1]:
        print("Not an Armstrong Number but Palindrome")
    else:
        print("Not an Armstrong Number and Not a Palindrome")
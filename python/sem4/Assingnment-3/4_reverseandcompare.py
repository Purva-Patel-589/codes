n=input("Enter a number: ")

rev=n[::-1]
if (n>rev):
    print(n,"is greater than its reverse",rev)
elif (n<rev):
    print(n,"is less than its reverse",rev)
else:
    print(n,"is equal to its reverse",rev)
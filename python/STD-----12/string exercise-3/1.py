x=input("Enter your string:")
l=len(x)
L=""

while l>0:
    L += x[l-1]
    l = l-1
print(L)

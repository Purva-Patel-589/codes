x=int(input('Enter the value of x:'))
n=int(input('Enter the power of (n):'))
s=0
y=+1
for a in range (n+1):
    t=(x**a)*y
    s+=t
    y*=-1
print('Sum of first',n,'terms:',s)

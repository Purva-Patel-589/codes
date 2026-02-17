x=int(input('Enter the value of x:'))
n=int(input('Enter the power of (n):'))
s=x
y=+1
for a in range(2,n+1):
    f=1
    for i in range(1,a+1):
        f*=i
    t=((x**a)*y)/f
    s+=t
    y*=+1
print('sum of first',n,'terms:',s)

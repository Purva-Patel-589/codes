n=int(input('Enter number:'))
x=0
for a in range(1,n):
    if(n%a==0):
        x=x+a
if(x==n):
    print('the number',n,'is a perfect number')
else:
    print('the number',n,'is not a perfect number')

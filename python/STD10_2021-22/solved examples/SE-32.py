n=int(input('Enter a three digit number:'))
x=0
y=n
while(y>0):
    d=y%10
    x+=d**3
    y//=10
if(n==x):
    print(n,'is an Armstrong number')
else:
    print(n,'is not an Armstrong number')

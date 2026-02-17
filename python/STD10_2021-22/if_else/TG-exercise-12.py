x=int(input('Please enter the number of packages purchased :'))
y=x*99

if(x==0)or(x<=9):
    print('Your discount is nothing')
    print('Your total price is',x)

elif(x>=10)and(x<=19):
    a=y-(y/10)
    print('Your discount is 10 percent')
    print('Your total price is',a)

elif(x>=20)and(x<=49):
    b=y-(y/20)
    print('Your discount is 20 percent')
    print('Your total price is',b)

elif(x>=50)and(x<=99):
    c=y-(y/30)
    print('Your discount is 30 percent')
    print('Your total price is',c)
elif(x>=100):
    d=y-(y/40)
    print('Your discount is 40 percent')
    print('Your total price is',d)

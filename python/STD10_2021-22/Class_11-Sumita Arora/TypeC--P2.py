x=int(input('Please enter the number of items you bought:'))
if(x<10):
    y=120*x
    print('Your total cost is',y)
elif(10<=x<=99):
    z=100*x
    print('Your total cost is',z)
else:
    v=70*x
    print('Your total cost is',v)

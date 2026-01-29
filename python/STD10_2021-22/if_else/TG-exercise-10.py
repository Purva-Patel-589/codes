x=int(input('Please enter the number of pennies :'))
y=int(input('Please enter the number of nickles :'))
z=int(input('Please enter the number of dimes :'))
w=int(input('Please enter the number of quaters :'))

a=x+(5*y)+(10*z)+(25*w)

if(a==100):
    print('Congrats,You won')
elif(a<100):
    print('The amount is less')
elif(a>100):
    print('The amount is more')

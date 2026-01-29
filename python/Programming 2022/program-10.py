# This program wiil say wether you won 1$ or not.

x=int(input('Enter the number of pennies:'))
y=int(input('Enter the number of nickels:'))
z=int(input('Enter the number of dimes:'))
w=int(input('Enter the number of quarters:'))

q=x+(y*5)+(z*10)+(w*25)

if q==10:
    print('congratulation you got right.')
elif q>100:
    print('amount entered was more than one dollar.')
else:
    print('amount entered was less than one dollar.')

# This program will calculate the shipping charges.

x=int(input('Enter the weight of a package:'))
if x<=2:
    y=x*1.50
    print('Your charge is $',y)
elif 2<x<=6:
    y=x*3
    print('Your charge is $',y)
elif 6<x<=10:
    y=x*4
    print('Your charge is $',y)
elif 6<x<=10:
    y=x*4
    print('Your charge is $',y)
else:
    y=x*4.75
    print('Your charge is $',y)

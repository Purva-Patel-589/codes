
x=int(input('Enter the number of packages purchased:'))
y=x*99

if 9<x<20:
    a=y-(y/10)
    print('you have received a 10% discount and the total price is ',a)
elif 19<x<50:
    a=y-(y/20)
    print('you have received a 20% discount and the total price is ',a)
elif 49<x<100:
    a=y-(y/30)
    print('you have received a 30% discount and the total price is ',a)
elif x>=100:
    a=y-(y/40)
    print('you have received a 40% discount and the total price is ',a)
else:
    print('You have not received any discount and your price is ',y)

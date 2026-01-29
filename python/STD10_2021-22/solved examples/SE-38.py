print('Enter two numbers below')
a=int(input('Enter number 1:'))
b=int(input('Enter number 1:'))
c=0
while c<5:
    print('calculator menu')
    print('1.add')
    print('2.subtract')
    print('3.multiply')
    print('4.divide')
    print('5.exit')

    c=int(input('enter choice(1-5):'))
    if(c==1):
        c=a+b
        print('sum=',c)
        break
    elif(c==2):
        c=a-b
        print('difference=',c)
        break
    elif(c==3):
        c=a*b
        print('product=',c)
        break
    elif(c==4):
        c=a/b
        print('quotient=',c)
        break
    elif(c==5):
        break
    else:
        print('Invalid Choice')


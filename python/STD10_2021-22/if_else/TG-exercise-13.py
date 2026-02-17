x=int(input('Please enter the weight of packages:'))

if(x<=2):
    a=x*1.50
    print('Your shipping charge is',a,'$')
    
elif(2<x<=6):
    b=x*3
    print('Your shipping charge is',b,'$')

    
elif(6<x<=10):
    c=x*4
    print('Your shipping charge is',c,'$')
    
elif(x>10):
    d=x*4.75
    print('Your shipping charge is',d,'$')

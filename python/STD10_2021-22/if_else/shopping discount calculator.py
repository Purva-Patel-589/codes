i1=int(input('please enter the price for the item:'))
i2=int(input('please enter the price for the item:'))
i3=int(input('please enter the price for the item:'))
i4=int(input('please enter the price for the item:'))
i5=int(input('please enter the price for the item:'))
x=i1+i2+i3+i4+i5
print('your total is',x)
if(x>=1000 and x<=4999):
    a=(2/100)*x
    print('you got 2% discount which is',a)
elif(x>=5000 and x<=9999):
    a=(5/100)*x
    print('you got 5% discount which is',a)
elif(x>=10000 and x<=19999):
    a=(10/100)*x
    print('you got 10% discount which is',a)
elif(x>=20000 and x<=29999):
    a=(20/100)*x
    print('you got 20% discount which is',a)
elif(x>=30000 and x<=39999):
    a=(30/100)*x
    print('you got 30% discount which is',a)
elif(x>=40000 and x<=49999):
    a=(40/100)*x
    print('you got 40% discount which is',a)
elif(x>=50000):
    a=(50/100)*x
    print('you got 50% discount which is',a)
else:
    print('you need to buy some more things')
print('Your total price is',x)
b=x-a
print('Your discount price is',b)
print('Thank you!! visit again')
    
            
        
                
    

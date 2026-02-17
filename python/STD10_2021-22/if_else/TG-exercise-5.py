x=float(input('please enter the mass of an object:'))
w=x*9.8
print('the weight is',w,'newtons' )
if(w>500):
    print('The weight of the object is too much, it is  heavy')
elif(w<100):
    print('The weight of the object is too light, it is not  heavy')
else:
    print('The weight of the object is normal')
     

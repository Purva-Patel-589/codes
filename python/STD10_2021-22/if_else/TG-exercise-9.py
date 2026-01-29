x=int(input('Please enter the number :'))
if(x==0):
    print('The colour is green') 
elif(1<=x<=10)or(19<=x<=28):
    if(x%2==0):
        print('Your colour is black')
    else:
        print('Your colour is red')
elif(11<=x<=18)or(29<=x<=36):
    if(x%2==0):
        print('Your colour is red')
    else:
        print('Your colour is black')

else:
    print('Error;Please enter the number between 1 to 36')

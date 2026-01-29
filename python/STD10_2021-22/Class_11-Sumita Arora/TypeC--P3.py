x=int(input('Please enter the number of hours between 1 to 12:'))
y=int(input('enter the number of hours ahead:'))
z=x+y
if(z>12):
    
    v=z-12
    print('The time is',v,'o clock')
else:
    print('the time after those hours is',z,'o clock')

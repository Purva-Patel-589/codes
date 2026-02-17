n=int(input('Enter your number :'))
for a in range(10,n+1):
    print(a)
if(a%3==0):
    print('Tipsy')
elif(a%7==0):
    print('Topsy')
elif(a%7==0 and a%3==0):
    print('TipsyTopsy')
else:
    print('Not a multiple of any')
        

x=int(input('Please entre your number:'))

y=x//2

for a in range(2,y):
    if(x%a==0):
        print('Not prime')
        break
    else:
        print('Prime')
        break

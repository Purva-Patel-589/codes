
#This programme will display if your number is positive or negative and even or odd. 

x=int(input('Enter your integer:'))
if x>0 and x%2==0:
    print('Positive')
    print('Even')
elif x>0 and x%2!=0:
    print('Positive ')
    print('Odd')
elif x<0 and x%2==0:
    print('Negative ')
    print('Even')
elif x<0 and x%2!=0:
    print('Negative ')
    print('Odd')
else:
    print('Zero')
    

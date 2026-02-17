s=int(input('Please enter the year:'))

if(s%100)==0 and(s%400)==0:
    print('It is a leap year')

elif(s%100)!=0 and (s%4)==0:
    print('It is a leap year')

else:
    print('It is not a leap year')

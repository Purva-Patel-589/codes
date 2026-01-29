# this programe is not available for 1900.
x=int(input('Please enter the number years :'))
if(x%4==0):
    print('It is a leap year')
elif(x%400==0 and x%100==0):
    print('It is a leap year')
else:
    print('It is a not leap year')


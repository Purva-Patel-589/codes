# This program will calculate the grades of the user and tell wether he/she is pass or fail 

x=int(input('Enter the marks of the test1 out of 25:'))
y=int(input('Enter the marks of the test2 out of 25:'))
z=int(input('Enter the marks of the exam out of 50:'))

a=x+y+z
if x>25 or y>25 or z>50:
    print('error')
elif a<=50 or z<25:
    print('Fail')
elif a>=80:
    print('Distinction')
elif 80>a>=60:
    print('Credit')
elif 60>a>50:
    print('Pass')


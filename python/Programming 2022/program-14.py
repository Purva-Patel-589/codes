# This program will calculate the BMI of a person and tell wether he/she
# is optimal or underweiht ao overweight.

x=int(input('Enter your weight in kg:'))
y=int(input('Enter your height in m:'))
z=x*(703/y*y)
if z<18.5:
    print('You are underweight.')
elif z>25:
    print('You are overweight.')
elif 18.5<z<25:
    print('You are optimal.')

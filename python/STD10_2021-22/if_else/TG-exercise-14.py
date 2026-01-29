w=float(input('Please enter your weight in pound:'))
h=float(input('Please enter your height in inches:'))

BMI=w*(703/h**2)

if(BMI<18.5):
    print('You are under weight')
elif(18.5<=BMI<=25):
    print('You are optimal')
else:
    print('You are overweight')

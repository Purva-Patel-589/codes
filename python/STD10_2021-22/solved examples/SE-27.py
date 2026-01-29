x=float(input('Enter weight in kg:'))
n=float(input('Enter height in meters:'))
bmi=x/(n*n)
print('BMI is:',bmi,end='')
if(bmi<18.5):
    print('...underweight')
elif(bmi<25):
    print('...normal')
elif(bmi<30):
    print('...overweight')
else:
    print('...obese')

               

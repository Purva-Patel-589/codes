x=int(input('Enter your side length :'))
y=int(input('Enter your side length :'))
z=int(input('Enter your side length :'))
if(x==y==z):
    print('It is an equilateral triangle')

elif(x==y!=z)or(x!=y==z)or(x==z!=y):
    print('It is an isosceles triangle')

else:
    print('It is an scalene triangle')

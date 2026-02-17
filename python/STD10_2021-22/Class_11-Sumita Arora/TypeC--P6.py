x=int(input('Enter the length of one side of triangle:'))
y=int(input('Enter the length of one side of triangle:'))
z=int(input('Enter the length of one side of triangle:'))

if(x+y>z or y+z>x or z+x>y):
    print('It is a triangle')
else:
    print('It is not a triangle')

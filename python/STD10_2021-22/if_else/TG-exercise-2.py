x=int(input('Please enter the length of rectangle:'))
y=int(input('Please enter the widht of rectangle:'))
l=int(input('Please enter the length of rectangle:'))
w=int(input('Please enter the widht of rectangle:'))

a=x*y
print('Area of a rectangle 1 is',a)
a2=l*w
print('Area of a rectangle 2 is',a2)
if(a>a2):
    print('Area of rectangle 1 is greater')
elif(a==a2):
    print('Area of rectangles are equal')
else:
    print('Area of rectangle 2 is greater')

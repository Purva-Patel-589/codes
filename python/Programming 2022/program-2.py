#This programme will tell which rectangle has greater area out of two or both have the same area.
l=int(input('Enter your length for first rectangle:'))
w=int(input('Enter your width for first rectangle:'))
a=l*w
x=int(input('Enter your length for second rectangle:'))
y=int(input('Enter your width for second rectangle:'))
b=x*y
if a>b:
    print('First rectangle has greater area.')
elif a<b:
    print('Second rectangle has greater area.')
else:
    print('Both the rectangles have same area.')

#This program will say if the dates entered  are magic or not.

x=int(input('Please enter any month in number:'))
y=int(input('Please enter any date in number:'))
z=int(input('Please enter any year in number:'))
if(y*x==z):
    print('It is a magic date.')
else:
    print('It is not a magic date.')

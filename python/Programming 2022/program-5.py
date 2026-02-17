#This program will calculate the weight of the object after gettinf the mass by the user.

m=int(input('Please enter your mass:'))
w=m*9.8
if w>500:
    print('It is too heavy.')
else:
    print('It is too light.')

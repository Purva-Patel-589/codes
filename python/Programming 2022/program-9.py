# This program will tell the colour of the pocket on a paticular number between 0 to 36.

x=int(input('Enter a pocket number:'))

if (0<x<11 and x%2==0) or (18<x<29 and x%2==0):
    print('The pocket is of black colour.')

elif (0<x<11 and x%2==1) or (18<x<29 and x%2==1):
    print('The pocket is of red colour.')

elif (10<x<19 and x%2==1) or (28<x<37 and x%2==1):
    print('The pocket is of black colour.')

elif (10<x<19 and x%2==0) or (28<x<37 and x%2==0):
    print('The pocket is of red colour.')
    
else:
    print('The pocket is of green colour.')

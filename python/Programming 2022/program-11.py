#This program will tell how many points does the customer won.

x=int(input('Enter the number of you have purchased this month:'))
if 1<x<4:
    print('You earned 5 points')
elif 3<x<6:
    print('You earned 15 points')
elif 5<x<8:
    print('You earned 30 points')
elif x>=8:
    print('You earned 60 points')
else:
    print('You earned 0 points')

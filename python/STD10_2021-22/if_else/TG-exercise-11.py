x=int(input('Please enter the number of books purchased this month :'))
if(x==0)or(x==1):
    print('You earned 0 points')
elif(x==2)or(x==3):
    print('You earned 5 points')
elif(x==4)or(x==5):
    print('You earned 15 points')
elif(x==6)or(x==7):
    print('You earned 30 points')
elif(x>=8):
    print('You earned 60 points')


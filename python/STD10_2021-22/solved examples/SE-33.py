n=int(input('Enter number:'))
x=n
y=0
while(x>0):
   d=x%10
   y=y*10+d
   x=x//10
if(x==y):
    print('number',n,'is a palindrome')
else:
    print('number',n,'is not a palindrome')

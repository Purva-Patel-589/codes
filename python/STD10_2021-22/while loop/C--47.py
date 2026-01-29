x=int(input('Enter your number:'))
a=x
b="y"
while b=="y":
    y=int(input('Enter your number:'))
    a+=y
    b=input('Do you want another number?(y/n):')
print('The total is',a)
    

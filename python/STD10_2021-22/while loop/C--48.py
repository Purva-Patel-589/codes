a="y"
b=0

while a=="y":
    x=input('Enter any name:')
    print(x,'has been invited')
    b+=1
    a=input('Do you want anybody else?(y/n):')
print('You have',b,'people coming')

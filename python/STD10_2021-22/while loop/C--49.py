compnum=50
x=int(input('Enter your number:'))
b=1
while x!=compnum:
    if x<compnum:
        print('Too Low')
    else:
        print('Too High')
    b+=1
    x=int(input('Have another number:'))
print('Well done, you took',b,'attempts')




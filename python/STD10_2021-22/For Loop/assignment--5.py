total=0
for a in range(0,11):
    x=int(input('Enter your number:'))
    y=input('Do you want thhis number included? (y/n)')
    if(y=="y"):
        total=total+1
average=(total/10)
print(average)

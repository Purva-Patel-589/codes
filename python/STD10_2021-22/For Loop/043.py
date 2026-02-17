direction=input("Do you want to up or down? (u/d)")
if(direction=="u"):
    x=int(input('What is the top number?'))
    for a in range(1,x+1):
        print(a)
elif(direction=="d"):
    x=int(input('Enter the number below 20:'))
    for a in range(20,x-1,-1):
        print(a)
else:
    print("I don't understand.")

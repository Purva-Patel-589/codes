for a in range(1,21):
    x=2**a-1
    y=int(x/2)+1
    for b in range(2,y):
        if x%b==0:
            print(x)
            break
    else:
        print(x,'\tprime')
    

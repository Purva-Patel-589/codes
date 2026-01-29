print('Reboot the computer and try to connect')
a=(input('Did that fix the problem:'))

if(a=='yes'):
        print('Your problem is solved')

elif(a=='no'):
    print('Reboot the computer and try to connect')
    b=(input('Did that fix the problem:'))
    if(b=='yes'):
        print('Your problem is solved')
    elif(b=='no'):
        print('Reboot the computer and try to connect')
        c=(input('Did that fix the problem:'))
        if(c=='yes'):
            print('Your problem is solved')
        elif(c=='no'):
            print('Make sure the cables between the router & modem are plugged in rmly.')
            d=(input('Did that fix the problem:'))
            if(d=='yes'):
                print('Your problem is solved')
            elif(d=='no'):
                print('Move the router to a new location and try to connect.')
                e=(input('Did that fix the problem:'))
                if(e=='yes'):
                    print('Your problem is solved')
                elif(e=='no'):
                    print('Get a new router')
                    



else:
    print('Your problem is solved')    


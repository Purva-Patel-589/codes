x=10
while x>0:
    print('There are',x,'greeen bottles hanging on the wall')
    print("And if one bottle should accidently fall,")
    x=x-1
    a=int(input('How many green bottles hanging on the wall?'))
    if a==x:
        print("There will be",x,"green bottles hanging on the wall.")
        break
    else:
        while a!=x:
            a=int(input('No!,try again:'))
print('there are no more green bottles hanging on the wall.')

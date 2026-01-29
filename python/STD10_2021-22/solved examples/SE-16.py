#to find lowest and second lowest integer from 10 integers
small=smaller=0
for a in range(10):
    n=int(input('Enter number:'))
    if a==0:
        small=n
    elif a==1:
        if n<=small:
            smaller=n
        else:
            smaller=small
            small=n
    else:
        if n<smaller:
            small=smaller
            small=n
        elif n<small:
            small=n
    print('The lowest number is:',smaller)
    print('The second lowest number is :',small)
    
    

n = 3
j = n-1
print(' '*(n)+'*')
for i in range(l,2*n):
    if i > n:
        print(' '*(i-n)+'*'+' '*(2*j-1)+'*')
        j -=1
    else:
        print(' '*(n-i) +'*'+' '*(2*i-1) +'*')
if n> l:
    print (''*n+'*' )

   

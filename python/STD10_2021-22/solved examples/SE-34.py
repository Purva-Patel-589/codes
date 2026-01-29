t=int(input('How many terms?(enter2+ value):'))
f=0
s=1
print('\nFibonacci series is:')
print(f,',',s,end=',')
for a in range(2,t):
    x=f+s
    print(x,end=',')
    f=s
    s=x

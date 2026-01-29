s=0
x=int(input('How many terms?'))
for a in range(2,x+2):
    t=0
    for b in range(1,a):
        t+=b
    print('Term',(a-1),':',t)
    s+=t
print('sum of',x,'term is',s)

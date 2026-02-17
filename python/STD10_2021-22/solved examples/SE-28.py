x=float(input('Enter the value of x:'))
n=int(input('Enter the value of n(forx**n):'))
s=0
for a in range(n+1):
    s+=x**a
    print('sum of first',n,'terms:',s)

import random
n=int(input('How many dice throws?'))
for a in range(1,n+1):
    print('throw',a,':',random.randint(1,6))

h=int(input('Please enter the number of people attending cookout:'))
b=int(input('Please enter the number hot dogs each people will be given:'))
x=h*b
if(x%10)==0:
    w=(x//10)
    print('The number of packagesof hot dogs required are',w)
elif (x%10)!=0:
    w=(x//10)+1
    print('The number of packagesof hot dogs required are',w)


if(x%8)==0:
    y=(x//8)
    print('The number of packagesof hot dogs required are',y)
elif (x%8)!=0:
    y=(x//8)+1
    print('The number of packagesof hot dogs required are',y)
    
a=(h*b)%10
c=10-a
b=(h*b)%8
d=8-b
if (c==10):
    print('The left over hot dog is',0)
else:
    print('The left over hot dog is:',c)
if(d==8):
    print('The left over hot dog bun is:',0)
else:
    print('The left over hot dog bun is:',d)


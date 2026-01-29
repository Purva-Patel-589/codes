# This program will tell how many hot dogs packages and hot dog buns packages will be needed for the cookout

x=int(input('Enter the number of people attending the cookout:'))
y=int(input('Enter the number of hotdogs each person will eat:'))
a=x*y
if a%10==0:
    w=(a//10)
    print('The minimum number of packages of hot dogs required',w)
else :
    w=(a//10)+1
    print('The minimum number of packages of hot dogs required',w)

    
if a%8==0:
    s=(a//8)
    print('The minimum number of packages of hot dog buns required',s)
else:
    s=(a//8)+1
    print('The minimum number of packages of hot dog buns required',s)


l=a%10
m=10-l
n=a%8
o=8-n

if (m==10):
    print('The left over hot dog is',0)
else:
   print('The left over hot dog is:',m)
if(o==8):
    print('The left over hot dog bun is:',0)
else:
    print('The left over hot dog bun is:',o)


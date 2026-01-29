x=int(input('Enter the value of x:'))
a=x*120
b=x*100
c=x*70

if x<10:
    print('the charge is',a)
elif 10<x<99:
    print('the charge is ',b)
elif x>=100:
    print('the charge is',c)
else:
    print('you have not buy anything')

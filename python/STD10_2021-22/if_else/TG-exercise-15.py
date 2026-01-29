s=float(input('Please enter number of seconds:'))
a=s//60
b=s%60

if(s>=60)and(s<3600):
    a=s//60
    b=s%60
    print('It is',a,'minute and',b,'seconds')
    
elif(s>=3600)and(s<86400):
    c=s//3600
    d=s%3600
    e=d//60
    f=d%60
    print('It is',c,'hour,',e,'minutes and',f,'seconds')

elif(s>=86400):
    g=s//86400
    h=s%86400
    w=h//3600
    x=h%3600
    y=d//60
    z=d%60
    print('It is',g,'days,',w,'hour,',y,'minutes and',z,'seconds')

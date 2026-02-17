x="a4k3b2"
y=len(x)
a=""
for i in range(y):
    if x[i].isdigit():
        num=x[i]
        pre=x[i-1]
        o=ord(pre)
        d=int(num)
        s=chr(o+d)
        m=x[i-1]+s
        a=a+m
print(a)
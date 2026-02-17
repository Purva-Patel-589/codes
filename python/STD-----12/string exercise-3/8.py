x="B4A1D3"
y=list(x)
a=""
d=""
b=""
for i in y:
    if i.isalpha():
        a=a+i
    elif i.isdigit():
        d=d+i
    else:
        b=b+i
l1=list(a)
l1.sort()
l2=list(d)
l2.sort()
print("".join(l1)+"".join(l2))
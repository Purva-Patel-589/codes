x=" a4b3c2"
y=len(x)
a=""

for i in range(y):
    if x[i].isdigit():
        b=x[i]
        c=x[i-1]
        d=int(b)
        l=str(d*c)
        a=a+l
print(a)
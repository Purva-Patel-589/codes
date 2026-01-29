n=int(input("Enter your no.:"))
l=[]
for i in range(n):
    a=int(input("Enter your no.:"))
    l.append(a)
t=tuple(l)
print(max(t))
print(min(t))
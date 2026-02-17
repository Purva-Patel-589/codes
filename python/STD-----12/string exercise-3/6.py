x=input("Enter your string:")
e=""
o=""
for i in range(len(x)):
    if i%2==0:
        e = e+x[i]

    else:
        o = o+x[i]

print(e)
print(o)

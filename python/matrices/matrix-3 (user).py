r=int(input("Rows:"))
c=int(input("Columns:"))
print("Enter entries rowwise:")
m=[]

for i in range(r):
    a=[]    
    for j in range(c):
        a.append(int(input()))
    m.append(a)

for i in range(r):
    for j in range(c):
        print(m[i][j],end=" ")
    print()

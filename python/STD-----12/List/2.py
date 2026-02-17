n=int(input("Enter the number of students:"))
M=[]
for i in range(n):
    m=input("Enter the marks out of 100:")
    s=int(m)    
    M.append(s)
print(M)
s=sum(M)
avg=s/n
print(avg)
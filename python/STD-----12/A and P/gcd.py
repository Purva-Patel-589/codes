import time
start=time.time()

m=54
n=25
a=[]
c=[]
p=[]
for i in range(1,m+1):
    if m%i==0:
        t=a.append(i)
for b in range (1,n+1):
    if n%b==0:
        s=c.append(b)
for q in c:
    if q in a:
        p.append(q)
print(p[-1])

end=time.time()
time_calculate=end-start
print(time_calculate)

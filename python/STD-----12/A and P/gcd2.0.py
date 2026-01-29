import time
start=time.time()
m=3
n=6
 
def gcd(m,n):
    i=min(m,n)
    while i>0:
        if m%i==0 and n%i==0:
            print(i)
            break
        else:
            i=i+1
gcd(m,n)
end=time.time()
time_calculate=end-start
print(time_calculate)
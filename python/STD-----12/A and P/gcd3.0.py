import time
start=time.time()
m=int(input("enter your 1st number:"))
n=int(input("enter your 2nd number:"))

def gcd(m,n):
    r=m%n
    if m<n:
        (m,n)=(n,m)
    if r==0:  
        return(n)
    else:
        return(gcd(n,r))
print(gcd(m,n))
end=time.time()
time_calculate=end-start
print(time_calculate)

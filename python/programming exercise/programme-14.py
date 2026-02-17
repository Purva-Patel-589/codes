p=int(input('Enter the amount of principal originally deposited into the account:'))
r=int(input('Enter the annual interest rate paid by the account:'))
n=int(input('Enter the number of times per year that the interest is compounded:'))
t=int(input('Enter the number of years the account will be left to earn interest:'))
b=n*t
a=p*(1+r/n)**b
print(a)

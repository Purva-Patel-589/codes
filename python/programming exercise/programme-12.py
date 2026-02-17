x=int(input('Enter the number shares:'))
z=x*40
print('He paid',z,'dollar for shares')
a=(z/100)*3
print('He gave',a,'dollar to the stockbroker')
p=x*42.75
print('he sold the shares for',p,'dollars')
b=(p/100)*3
print('He gave',b,'dollar to the stockbroker')
c=p-(b+a)
print('He is left with',c,'dollar')
if(c>0):
    print('it is positive and made profit')
else:
    print('it is negative and made lose')

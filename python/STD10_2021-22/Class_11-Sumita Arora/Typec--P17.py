x = int ( input ("Enter number:"))
y = x # working number stores x initially
z= 0
while(y > 0):
    a = y % 10
    z = z*10 + a
    y = y // 10
if(x == z):
    print( "Number", x, "is a palindrome!")
else:
    print( "Number", x, "is not a palindrome!")

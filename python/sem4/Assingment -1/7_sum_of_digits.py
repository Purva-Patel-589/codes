num = int(input("Enter a number: "))
s = 0
temp = abs(num)

while temp > 0:
    s += temp % 10
    temp //= 10

print("Sum of digits =", s)

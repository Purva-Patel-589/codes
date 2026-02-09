num = int(input("Enter a number: "))

s = 0
temp = abs(num)

while temp > 0:
    s += temp % 10
    temp //= 10

if s % 2 == 0:
    print("Sum of digits =", s, "→ Even")
else:
    print("Sum of digits =", s, "→ Odd")
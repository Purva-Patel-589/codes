num = input("Enter a number: ")
s = 0

for digit in num:
    if digit.isdigit():
        s += int(digit)

print("Sum of digits =", s)
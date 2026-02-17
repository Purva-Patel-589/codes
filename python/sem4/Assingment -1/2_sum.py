n = int(input("Enter a positive integer: "))
sum_n = 0

for i in range(1, n + 1):
    sum_n += i

print(f"The sum of first {n} natural numbers is: {sum_n}")
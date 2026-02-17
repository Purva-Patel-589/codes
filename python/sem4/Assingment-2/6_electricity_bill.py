u = int(input("Enter units: "))
cost = 0

if u <= 100:
    cost = u * 2
elif u <= 200:
    cost = 100 * 2 + (u - 100) * 3
else:
    cost = 100 * 2 + 100 * 3 + (u - 200) * 5

print("Bill =", cost)
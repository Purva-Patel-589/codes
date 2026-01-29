n = int(input("Enter the number: "))

if n > 0 and n <= 50:
    print("Number lies between 1-50")
elif n >= 51 and n <= 100:
    print("Number lies between 51-100")
elif n > 100:
    print("Number is greater than 100")
else:
    print("Invalid (≤ 0)")

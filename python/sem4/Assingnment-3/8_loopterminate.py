total = 0

while True:
    n = int(input("Enter a number: "))
    total += n
    if total > 50:
        print("Sum exceeded 50")
        break
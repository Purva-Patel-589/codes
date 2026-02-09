count = 5

while count >= 2:
    print(f"\nCountdown value: {count}")
    for i in range(1, 11):
        if i % count == 0:
            continue
        print(i ** count)
    count -= 1
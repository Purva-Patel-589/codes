for i in range(1, 501):
    sum = 0
    temp = i
    length = len(str(i))
    for j in str(i):
        sum += int(j) ** length
    if sum == temp:
        print(i)
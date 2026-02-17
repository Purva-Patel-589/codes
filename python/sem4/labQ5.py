while True:
    s = input("Enter a string: ")
    if s.upper() == "QUIT":
        print("GoodBye!")
        break
    count = 0
    for ch in s:
        if ch.upper() == 'N':
            count += 1
    
    print("Occurrence of 'n':", count)
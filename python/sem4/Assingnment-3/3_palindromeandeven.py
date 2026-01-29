n = input("Enter a number: ")

if n == n[::-1]:
    if int(n) % 2 == 0:
        print("Palindrome and Even")
    else:
        print("Palindrome and Odd")
else:
    print("Not Palindrome")

import random
import sys

x=input("Enter the string:")
l=len(x)

while True:
    L1=random.randint(-l,l-1)
    L2=random.randint(-l,l-1)
    print(x)
    print("[",L1,",",L2,"]")
    y = input("")
    a = x[L1:L2]

    if a==y:
        print("Correct")

    elif y=="q":
        sys.exit(0)

    else:
        print("Incorrect")

    

    
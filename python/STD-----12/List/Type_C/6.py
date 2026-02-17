L=[1,2,3,4,5,6,7,8,9]
x=int(input('Enter your no.:'))
for i in range(len(L)):
    if L[i]==x:
        print(i)
if x not in L:
    print("Your no. is not in the list.")  
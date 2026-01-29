import sys

L=["1","2","j","m"]
print("What you want to change the list")
while True:
    print(" 1.Append an element \n 2.Insert an element \n 3.Append a list to the given list \n 4.Modify an existing element \n 5.Delete an existing element from its position \n 6.Delete an existing element with a given value \n 7.Sort the list in ascending order \n 8.Sort the list in descending order \n 9.Or Quit")
    y=int(input("What do you want to change from the above 1-9:"))
    if y==1:
        c=input("What do you want to add:")
        L.append(c)
        print(L)
    elif y==2:
        i=input("What do you want to insert:")
        L.insert(0,i)
        print(L)
    elif y==3:
        w=input("Enter your list:")
        list(w)
        L.extend(w)
        print(L)
    elif y==4:
        d=input("What do you want to modify:")
        d1=int(input("Enter your index:"))
        L[d1]=d
        print(L)
    elif y==5:
        o=input("What do you want to delete:")
        L.remove(o)
        print(L)
    elif y==6:
        g=int(input("What do you want to delete,enter its index:"))
        L.pop(g)
        print(L)
    elif y==7:
        j=sorted(L)
        print(j)
    elif y==8:
        j1=sorted(L, reverse=True)
    elif y==9:
        sys.exit(0)
    else:
        print(L)
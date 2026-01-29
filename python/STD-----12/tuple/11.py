La=(1,2,3,5,4,2)
Lb=(1,2,3,4,5,6)
La=list(La)
Lb=list(Lb)

for i in range(len(La)):
    if La[i]!=Lb[i]:
        print("False")
        break
    else:
        print("True")

import statistics
T= ((1,2),(3,4.15,5.15),(7,8,12,15))
m=[]
for i in T:
    x=round(statistics.mean(i),2)
    m.append(x)
    print("Mean element",i,":",x)
print("Mean of means:",round(sum(m)/len(m),2))
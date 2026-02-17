x=input("Enter your word:")
y=input("Enter your other word of same length:")
if len(x)==len(y):
    for i in range(len(x)):
        print(x[i]+y[i],end='')
else:
    print("Word not of same length!")
x=int(input('How many friends do want to invite to the party? :'))
if x<10:
    for a in range(x):
        y=input('Enter a name:')
        print(y,'has been invited')
else:
    print('Too many people')

v=(input('Is anyone in your party a vegetarian?'))

a=(input('Is anyone in your party a vegan?'))

g=(input('Is anyone in your party gluten-free?'))

if(v=='yes')and(a=='yes')and(g=='yes'):
    print('Here are your restaurant choices')
    print('Corner Cafe')
    print("The Chef's Kitchen")
    
elif(v=='yes')and(a=='no')and(g=='yes'):
    print('Here are your restaurant choices')
    print('Corner Cafe')
    print("The Chef's Kitchen")
    print('Main Street Pizza Company')

elif(v=='no')and(a=='no')and(g=='no'):
    print('Here are your restaurant choices')
    print('Corner Cafe')
    print("The Chef's Kitchen")
    print('Main Street Pizza Company')
    print('Joe’s Gourmet Burgers')
    print('Mama’s Fine Italian')

elif(v=='yes')and(a=='yes')and(g=='no'):
    print('Here are your restaurant choices')
    print('Corner Cafe')
    print("The Chef's Kitchen")
    
elif(v=='no')and(a=='no')and(g=='yes'):
    print('Here are your restaurant choices')
    print('Joe’s Gourmet Burgers')
    print('Mama’s Fine Italian')


elif(v=='no')and(a=='yes')and(g=='yes'):
    print('Here are your restaurant choices')
    print('Joe’s Gourmet Burgers')
    print('Corner Cafe')
    print("The Chef's Kitchen")

elif(v=='no')and(a=='yes')and(g=='no'):
    print('Here are your restaurant choices')
    print('Corner Cafe')
    print("The Chef's Kitchen")

elif(v=='yes')and(a=='no')and(g=='no'):
    print('Here are your restaurant choices')
    print('Corner Cafe')
    print("The Chef's Kitchen")
    print('Mama’s Fine Italian')
    print('Main Street Pizza Company')      

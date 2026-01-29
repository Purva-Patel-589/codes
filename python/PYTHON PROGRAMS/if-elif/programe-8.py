s1=int(input('Enter the markes of Math='))
s2=int(input('Enter the markes of Science='))
s3=int(input('Enter the markes of Social Science='))
s4=int(input('Enter the markes of English='))
s5=int(input('Enter the markes of Hindi='))

per=(s1+s2+s3+s4+s5)/5
print('you got ',per) 

print('Grade A=90%')
print('Grade B=80 to 90%')
print('Grade C=70 to 80%')
print('Grade D=60 to 70%')
print('Grade E=40 to 60%')
print('Grade F=less than 40%')
if(per>90):
    print('you got Grade A')
elif(80<per<=90):
    print('you got Grade B')
elif(700<per<=80):
    print('you got Grade C')
elif(60<per<=70):
    print('you got Grade D')
elif(60<per<=40):
    print('you got Grade E')
elif(per<40):
    sprint('you got Grade F')
    

basic = float(input("Enter basic salary: "))

if basic <= 10000:
    hra = basic * 0.20
    da = basic * 0.80
elif basic <= 20000:
    hra = basic * 0.25
    da = basic * 0.90
else:
    hra = basic * 0.30
    da = basic * 0.95

total_salary = basic + hra + da

print("Total Salary:", total_salary)
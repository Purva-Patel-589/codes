M = "atmiyadasnadas"
print(M)
x=input("Enter your sub_string:")

if x in M:
    print("Sub-string:",x)
    i=M.find(x)
    print("Sub-string found at index:",i)
    while x in M:  
        a=M.index(x,x+1)
        print("Sub-string found at index:",a)
    c=M.count(x)
    print("Sub-string ‘das’ present",c,"times in main string")

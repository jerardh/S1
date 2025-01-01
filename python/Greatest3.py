x=int(input("Enter first number: "))
y=int(input("Enter second number: "))
z=int(input("Enter third number: "))
if x>y:
    if x>z:
        large=x
    else:
        large=z
else:
    if y>z:
        large=y
    else:
        large=z
        
print(large, "is the greatest")    
x=input("")
    


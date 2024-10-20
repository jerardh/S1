a=int(input("Enter a:"))
b=int(input("Enter b:"))
c=int(input("Enter c:"))
temp=(b**2)-(4*a*c)
if(temp==0):
    solution=(-b)/(2*a)
    print("Solution is ",solution)
elif(temp<0):
    print("No real solution")
else:
    solution1=((-b)+pow(temp,0.5))/(2*a)
    solution2=((-b)-pow(temp,0.5))/(2*a)
    print("Solutions are ",solution1,",",solution2)

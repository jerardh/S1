a=int(input("Enter first number: "))
b=int(input("Enter second number: "))
if a>b:
    a=a%b
else:
    b=b%a
if(a==0):
    print("GCD of two numbers are: ", b)
else:
    print("GCD of two numbers are: ", a)


x=input("i")
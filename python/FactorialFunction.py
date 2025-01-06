def factorial(n):
    if n==1:
        return 1
    else:
        return n*factorial(n-1)

n=int(input("Enter a number: "))

res=factorial(n)
print("Factorial of that number: ", res)

x=input("i")



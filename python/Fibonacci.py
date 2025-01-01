n=int(input("Enter a number: "))
a=0
b=1
c=1
i=0
print("First ",n," fibonacci numbers are ")
print(b,end=" ")
while i<n-1:
    print(c,end=" ")
    a=b
    b=c
    c=a+b
    i+=1


x=input("")
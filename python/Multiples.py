n=int(input("Enter the number: "))
limit=int(input("Enter the limit: "))
print("Multiples of ",n," till ",limit)
for i in range(1,limit+1):
    print(i,"x",n,"=",i*n)
x=input("")

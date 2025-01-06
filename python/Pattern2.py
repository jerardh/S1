n = int(input("Enter a number: "))
n+=1
for i in range(1,2*n):
    if i<(n):
        for j in range(1,i+1):
            print("*", end=" ")
        print("\n")   
    elif(i>n):
        for j in range(1,(2*n)-i):
            print("*", end=" ")
        print("\n")   
    else:
        pass 
x=input(" ")
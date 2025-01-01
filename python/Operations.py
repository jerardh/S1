n1=int(input("Enter first num: "))
n2=int(input("Enter second num: "))
flag=True
while(flag):
    print("Select any operation\n")
    op=int(input("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n"))
    if(op==1):
        result=n1+n2
        print("Result: ", result)
    elif(op==2):
        result=n1-n2
        print("Result: ", result)
    elif(op==3):
        result=n1*n2
        print("Result: ", result)
    elif(op==4):
        result=n1/n2
        print("Result: ", result)
    else:
        print("Invalid operation")
    c=input("Do you want to quit?(y/n)")
    if(c=="y" or c=="Y"):
        flag=False
x=input("")
        
    

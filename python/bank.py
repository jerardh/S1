class Account:
    def __init__(self,accno,name,type,balance=0):
        self.accno=accno
        self.name=name
        self.acctype=type
        self.balance=balance
    def display(self):
        print("A/C No:",self.accno)
        print("Name:",self.name)
        print("Account type:",self.acctype)
        print("Balance:",self.balance)
    def deposit(self,amt):
        self.balance=self.balance+amt
        print("Amount deposited successfully")
        self.getBalance()
    def withdraw(self,amt):
        if(amt>self.balance):
            print("Insufficient balance")
        else:
            self.balance=self.balance-amt
            print("Amount withdrawn=",amt)
            self.getBalance()
    def getBalance(self):
        print("Available balance=",self.balance)
accno=int(input("Enter your account number:"))
name=input("Enter your name:")
acctype=input("Enter account type:")
balance=int(input("Enter your deposit:"))
acc=Account(accno,name,acctype,balance)
var="Y"
while(var=="Y" or var=="y"):
    print("1.Check Balance\n2.Deposit\n3.Withdraw\n4.PassBook")
    choice = int(input("Enter an option:"))
    if(choice==1):
        acc.getBalance()
    elif (choice==2):
        amt=int(input("Enter the amount to deposit: "))
        acc.deposit(amt)
    elif(choice==3):
        amt=int(input("Enter the amount to withdraw: "))
        acc.withdraw(amt)
    elif(choice==4):
        acc.display()
    else:
        print("Invalid choice")
    var=input("Do you want to continue(Y/N):")
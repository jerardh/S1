year=int(input("Enter an year:"))
isLeap=False
if(year%100==0):
    if (year%400==0):
        isLeap=True
else:
    if(year%4==0):
        isLeap=True
if(isLeap):
    print(year," is a leap year")
else:
    print(year," is not a leap year")

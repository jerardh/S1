num=int(input("Enter a number:"))
count=0
copy=num
while(num>0):
    count=count+1
    num=num//10
print("Number of digits in ",copy,"=",count)
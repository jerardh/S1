n=int(input("Enter the number of elements:"))
dict={}
for i in range(0,n):
    key=input("Enter key "+str(i)+":")
    value=input("Enter value "+str(i)+":")
    dict[key]=value
keys=list(dict.keys())
keys.sort()
print("Sorted Dictionary")
for k in keys:
    print(k,":",dict[k])
keys.sort(reverse=True)  
for k in keys:
    print(k,":",dict[k])  

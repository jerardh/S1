str = input("Enter a string: ")
res={}
for char in str:
    if char in res.keys():
        res[char]=res[char]+1
    else:
        res[char]=1
print(res)
x=input(" ")
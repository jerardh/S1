str1=input("Enter first string: ")
str2=input("Enter second string: ")

str3=str2[0]+str1[1:]+str1[0]+str2[1:]
print(str3)
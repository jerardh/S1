file=open("sample.txt")
lines=file.readlines()
file.close()
print("Lines in file are")
for line in lines:
    print(line)

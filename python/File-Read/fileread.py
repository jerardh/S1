file=open("data.csv")
rows=file.readlines()
file.close()
print("Lines in file are")
for line in rows:
    cols=line.split(",")
    for data in cols:
        print(data,end=" | ")
    
    

file=open("email.csv")
lines=file.readlines()
file.close()
newfile=open("result.csv","w")
for i in range(0,len(lines)):
    if(i%2==1):
        newfile.write(lines[i])
newfile.close()
        



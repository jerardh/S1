class Student:
    def __init__(self,sname1,regno1,cname1,companies1):
        self.sname=sname1
        self.regno=regno1
        self.cname=cname1
        self.companies=companies1
    def display(self):
        print(f"RegNo:{self.regno},Name:{self.sname},Class{self.cname},Companies{self.companies}")
companyset=set()
studentlist={}
flag=True
while(flag):
    reg=input("Enter regno:")
    if reg in studentlist.keys():#aleardy exits
        company=input("Enter company:")
        student=studentlist[reg]
        student.companies.append(company)
        studentlist[reg]=student
        companyset.add(company)
    else:#new student
        name=input("Enter name:")
        classn=input("Enter class:")
        company=input("Enter company:")
        student=Student(name,reg,classn,[company])
        studentlist[reg]=student
        companyset.add(company)
    exit=input("\nDo you continue(y/n)")
    if(exit=='n' or exit=='N'):
        flag=False
print("Student info")
for student in studentlist.values():
    student.display()
print("\nStudent list companywise")
for company in companyset:
    print(company,end="\n")
    for student in studentlist.values():
        if(company in student.companies):
            print(student.sname,end=",")


    









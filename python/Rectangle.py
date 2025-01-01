class Rectangle:
    def __init__(self, length,breadth):
        self.length=length
        self.breadth=breadth
               
    def areaRec(self):
        return self.length*self.breadth
    
    def periRec(self):
        return 2*(self.length+self.breadth)
    
length1=int(input("Enter length of the rectangle 1: "))   
breadth1=int(input("Enter breadth of the rectangle 1: ")) 
r1=Rectangle(length1,breadth1)
length2=int(input("Enter length of the rectangle 2: "))   
breadth2=int(input("Enter breadth of the rectangle 2: ")) 
r2=Rectangle(length2,breadth2)
area1= r1.areaRec()   
perimeter1 = r1.periRec()
area2= r2.areaRec()   
perimeter2 = r2.periRec()
print("Area of the first rectangle: ", area1)
print("Perimeter of the first rectangle: ", perimeter1)
print("Area of the second rectangle: ", area2)
print("Perimeter of the second rectangle: ", perimeter2)


if(area1>area2):
    print("Area of the first rectangle is larger")
else:
    print("Area of the second rectangle is larger")



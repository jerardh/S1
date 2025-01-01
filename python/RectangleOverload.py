class Rectangle:
    def __init__(self, length,breadth):
        self.length=length
        self.breadth=breadth
               
    def areaRec(self):
        return self.length*self.breadth
    
    def __lt__(self,rect2):
        return(self.areaRec()<rect2.areaRec())
            
    
    
length1=int(input("Enter length of the rectangle 1: "))   
breadth1=int(input("Enter breadth of the rectangle 1: ")) 
r1=Rectangle(length1,breadth1)
length2=int(input("Enter length of the rectangle 2: "))   
breadth2=int(input("Enter breadth of the rectangle 2: ")) 
r2=Rectangle(length2,breadth2)
area1= r1.areaRec()   
area2= r2.areaRec()   
print("Area of the first rectangle: ", area1)
print("Area of the second rectangle: ", area2)
if(r1<r2):
    print("Area of first rectangle is smaller")
else:
     print("Area of second rectangle is smaller")


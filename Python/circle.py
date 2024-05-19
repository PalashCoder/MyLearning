class Circle():
    def __init__(self,radius):
        self.radius=radius
    def area(self,radius):
        return 3.14*radius**2
    def perimeter(self,radius):
        return 2*3.14*radius
    def printVal(self):
        print("Area:\t",self.area(self.radius), "Units")
        print("Perimeter:\t",self.perimeter(self.radius), "Units")

c1=Circle(4)
c1.printVal()
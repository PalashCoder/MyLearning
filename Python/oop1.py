class student:
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks

    def display(self):
        print("Name:", self.name,"\n" "Marks:", self.marks)
    def average(self):
        print("Average Marks: ",sum(self.marks)/len(self.marks))


s1 = student("John", [45, 67, 56])

s1.display()
s1.average()
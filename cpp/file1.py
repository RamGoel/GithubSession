class car:
    def __init__(self,var):
        self.var=var
    def printVal(self):
        print("val is :", self.var)


# class driver:
#     var=input("Enter Driver Name: ")
#     print("driver is :",var)


car1=car(245)
car2=car(678)
car3=car(89)
# d1=driver()

# print(car1.var, "car")
# print(car2.var, "car")
# print(car3.var, "car")


# print(type(car1))
# print(type(car2))
# print(type(car3))



car1.printVal()
car3.printVal()
car2.printVal()
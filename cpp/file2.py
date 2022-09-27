# class change:
#     def __init__(self,x,y,z):
#         self.a=x+y+z

# x=change(1,2,3)
# y=getattr(x,'a')
# setattr(x,'a',y+1)
# print(x.a)


class test:
    def __init__(self):
        self.variable='OLd'
        self.Change(self.variable)
    def Change(self,var):
        var='New'

obj=test()
print(obj.variable)
print(obj.variable)



def add(v):
    v=6

v=7
add(v)

print(v)
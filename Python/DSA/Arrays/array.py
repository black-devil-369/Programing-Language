class Array:
    def __init__(self,cap):
        self.capacity = cap
        self.lastindex = -1
        self.ptr = [0]*self.capacity

    def append(self,data):
        if(self.lastindex == self.capacity -1):
            print("Arrays is Full")
        else:
            self.lastindex+=1
            self.ptr[self.lastindex] = data

    def count(self):
        return self.lastindex+1
    
    def get(self,index):
        if(index>=0 and index<=self.lastindex+1):
            return self.ptr[index]
        
    def isEmpty(self):
        return self.lastindex == -1
    
    def isFull(self):
        return self.lastindex == self.capacity-1
    def printlist(self):
        for item in self.ptr:
            print(item,end=" ")
        print(" ")
# Deriver Program for checking the working of code
a = Array(3)
print(a.isEmpty())
a.append(45)
a.append(44)
a.append("Ajay")
a.printlist()
print(a.count())
print(a.get(0))
print(a.isFull())
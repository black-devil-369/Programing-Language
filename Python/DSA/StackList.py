class Node:
    def __init__(self):
        self.item = None
        self.next = None
class StackList:
    top = Node()
    def __init__(self):
        self.top = None
    def push(self,data):
        n = Node()
        n.item = data
        n.next = None
        if(self.top == None):
            self.top = n
        else:
            temp = self.top
            while(temp.next != None):
                temp = temp.next
            temp.next = n
    def peek(self):
        return self.top.item
    def pop(self):
        if(self.top!= None):
            temp = self.top
            self.top = self.top.next
            temp = None
    def printStackList(self):
        temp = self.top
        while(temp != None):
            print(temp.item, end =" ")
            temp = temp.next
        print(" ")

# Deriver Program start here For Checking the Working of Code
obj = StackList()
# n = int(input("Enter the number how many you inserting value in stackList\n"))
# for i in range(n):
#     b = int(input())
#     obj.insert(b)
# print("The list of Element Inserting by you inside a Stack List\n")
# obj.printStackList()
obj.push(42)
obj.push(90)
obj.push(48)
obj.push(56)
obj.push(54)
obj.printStackList()
obj.pop()
obj.printStackList()
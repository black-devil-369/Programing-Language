class Node:
    # creating a constructor in the Node class
    def __init__(self):
        self.item = None
        self.next = None
# creating a class 
class SLL:
    start = Node()
    def __init__(self):
        self.start = None
    # Function for printing the node at the start
    def insertAtstart(self,data):
        n = Node()
        n.item = data
        n.next = self.start
        self.start = n
    # function for insert node at the end 
    def insertAtend(self,data):
        temp = Node
        n = Node()
        n.item = data
        n.next = None
        if(self.start==None):
            self.start = n
        else:
            temp = self.start
            while(temp.next != None):
                temp = temp.next
            temp.next = n
    # function for counting the node inside the list
    def count(self):
        count = 0
        temp = Node
        temp = self.start
        while(temp!=None):
            count=count+1
            temp = temp.next
        return count
    # function for reverse the list 
    def reverse(self):
        if(self.start !=None and self.start.next != None):
            t2 = None
            while(self.start.next != None):
                t1 = self.start
                self.start = self.start.next
                t1.next = t2
                t2 = t1
            self.start.next = t1
    # function for priting the list 
    def printlist(self):
        temp = self.start
        while(temp!=None):
            print(temp.item ,end=" ")
            temp = temp.next
        print("")
# creating an object for SLL
s = SLL()
s.insertAtstart(35)
s.insertAtstart(42)
s.insertAtstart(25)
s.insertAtend(500)
s.insertAtstart(90)
s.insertAtstart(45)
s.insertAtend(400)
s.printlist()
print(s.count())
s.reverse()
s.printlist()

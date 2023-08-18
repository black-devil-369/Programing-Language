class node:
    def __init__(self):
        self.prev = None
        self.item = None
        self.next = None
class DLL:
    start = node()
    def __init__(self):
        self.start = None
    def insertAtStart(self,data):
        n = node()
        n.prev = None
        n.item = data
        if(self.start==None):
            n.next = None
            self.start = n
        else:
            self.start.prev = n
            n.next = self.start
            self.start = n
    def insertAtEnd(self,data):
        n = node()
        n.next = None
        n.item = data
        if(self.start==None):
            n.prev = None
            self.start = n
        else:
            temp = self.start
            while(temp.next!=None):
                temp = temp.next
            temp.next = n
            n.prev = temp
    def printlist(self):
        temp = self.start
        while(temp!=None):
            print(temp.item,end =" ")
            temp = temp.next
        print(" ")
# Deriver Program for cheching the code working or not
d = DLL()
d.insertAtStart(100)
d.insertAtEnd(67)
d.insertAtEnd(78)
d.insertAtEnd(100)
d.insertAtEnd(789)
d.printlist()


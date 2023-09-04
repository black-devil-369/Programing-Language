class Node:
    def __init__(self):
        self.left = None
        self.item = None
        self.right = None
class BST:
    def __init__(self):
        self.root = None
    def preorderrec(self,temp):
        if(temp!=None):
            print(temp.item, end=" ")
            self.preorderrec(temp.left)
            self.preorderrec(temp.right)
    def preorder(self):
        self.preorderrec(self.root)
        print(" ")

    def inordererec(self,ptr):
        if(ptr):
            self.inordererec(ptr.left)
            print(ptr.item, end=" ")
            self.inordererec(ptr.right)
    def inorder(self):
        self.inordererec(self.root)
        print(" ")
    
    def postorderrec(self,temp):
        if(temp):
            self.postorderrec(temp.left)
            self.postorderrec(temp.right)
            print(temp.item , end=" ")
    def postorder(self):
        self.postorderrec(self.root)
        print(" ")
    def isEmpty(self):
        return self.root==None
    def insert(self,data):
        n = Node()
        n.left = None
        n.item = data
        n.right = None
        if(self.root == None):
            self.root = n
        else:
            ptr = self.root
            while(n.item!=ptr.item):
                if(n.item<ptr.item):
                    if(ptr.left!=None):
                        ptr = ptr.left
                    else:
                        ptr.left = n
                        break
                else:
                    if(ptr.right!=None):
                        ptr = ptr.right
                    else:
                        ptr.right = n
                        break
            if(ptr.item == n.item):
                n = None
# Deriver Program for Checking the working of code
b = BST()
b.insert(45)
b.insert(42)
b.insert(90)
b.insert(80)
b.insert(60)
b.insert(50)
b.insert(100)
print("PreOrder Binary Search Tree")
b.preorder()
print("PostOrder Binary Search Tree")
b.postorder()
print("Inorder Binary Search Tree")
b.inorder()
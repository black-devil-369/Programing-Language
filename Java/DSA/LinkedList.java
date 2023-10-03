// Deriver class For Checking the working of code
class LinkedList{
    public static void main(String[] args) {
        SLL s = new SLL();
        s.printlist();
        System.out.println("Printing the list After the inserting the element inside an Linkedlist");
        s.insertAtEnd(89);
        s.insertAtEnd(78);
        s.insertAtstart(67);
        s.insertAtstart(100);
        s.insertAtstart(200);
        s.printlist();
        s.deleteLastNode();
        s.deleteFirstNode();
        s.reverse();

        System.out.println("Printing the list after the Reversing");
        s.printlist();
    }
}
class Node{
    int item;
    Node next;
    public Node(int data){
        this.item = data;
        this.next = null;
    }
}
class SLL{
    private Node start;
    public SLL(){
        start = null;
    }
    public void insertAtstart(int data){
        Node n = new Node(data);
        n.next = start;
        start = n;
    }
    public void deleteFirstNode(){
        Node temp;
        if(start!=null){
            temp = start;
            start = start.next;
            temp.next=null;
            temp = null;
        }
    }
    public void deleteLastNode(){
        Node temp;
        if(start==null || start.next==null){
            start = null;
        }
        else{
            temp = start;
            while(temp.next.next!=null){
                temp = temp.next;
            }
            temp.next = null;
        }
    }
    public void insertAtEnd(int data){
        Node temp;
        Node n = new Node(data);
        if(start==null){
            start = n;
        }
        else{
            temp = start;
            while(temp.next!=null){
                temp = temp.next;
            }
            temp.next = n;
        }
    }
    public void insertAtNode(Node temp){
        Node t;
        if(start!=null){
            t = start;
            while(t!=null){
                if(t==temp){
                    t.next = temp;
                    temp.next = t.next;
                }
                t = t.next;
            }
        }
    }
    public void reverse(){
        Node t1,t2;
        if(start!=null && start.next!=null){
            t2 = null;
            do{
                t1 = start;
                start = start.next;
                t1.next = t2;
                t2 = t1;
            }while(start.next!=null);
            start.next = t1;
        }
    }
    public void printlist(){
        Node temp;
        if(start!=null){
            temp = start;
            while(temp!=null){
                System.out.print(temp.item+" ");
                temp = temp.next;
            }
        }
        else{
            System.out.println("Empty list");
        }
        System.out.println("");
    }
}
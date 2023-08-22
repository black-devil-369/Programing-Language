
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

// Deriver Code
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
    }
}
import java.util.Scanner;
class Node{
    public Node prev;
    public int item;
    public Node next;
}
class Deque{
    private Node front;
    private Node rear;
    public Deque(){
        front = null;
        rear = null;
    }
    public void insertAtFront(int data){
        Node n = new Node();
        n.prev = null;
        n.item = data;
        n.next = front;
        if(front!=null){
            front.prev = n;
        }
        else{
            rear = n;
        }
        front = n;
    }
    public void insertAtRear(int data){
        Node n = new Node();
        n.item = data;
        n.next = null;
        n.prev = rear;
        if(rear!=null){
            rear.next = n;
        }
        else{
            front = n;
        }
        rear = n;
    }
    public void deleteFront(){
        Node t;
        if(front!=null){
            t = front;
            if(front==rear){
                front=rear=null;
            }
            else{
                front = front.next;
                front.prev = null;
            }
            t = null;
        }
    }
    public void printDeque(){
        Node temp;
        temp = front;
        while(temp!=null){
            System.out.print(temp.item+" ");
            temp = temp.next;
        }
        System.out.println(" ");
    }
    public void deleteRear(){
        Node r;
        if(rear!=null){
            r = rear;
            if(rear==front){
                rear=front=null;
            }
            else{
                rear = rear.prev;
                rear.next = null;
            }
            r = null;
        }
    }
    public Node getFront(){
        return front;
    }
    public Node getRack(){
        return rear;
    }
    public int getFrontElement(){
        return front.item;
    }
    public int getRearElement(){
        return rear.item;
    }
    public boolean isEmpty(){
        return front==null;
    }
}
public class DequeDLL {
    public static void main(String[] args) {
        Deque d = new Deque();
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the number for inserting the Elmenet in the Deque");
        int n = input.nextInt();
        System.out.println("Enter the Element Front in the Deque");
        for(int i =0;i<n;i++){
            int b = input.nextInt();
            d.insertAtFront(b);
        }
        input.close();
        d.printDeque();
        d.deleteFront();
        System.out.println("Element Enter by you inside an Deque");
        d.printDeque();

    }
}
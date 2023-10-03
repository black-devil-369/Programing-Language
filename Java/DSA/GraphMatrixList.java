import java.util.Scanner;
class GraphMatrixList{
    public static void main(String[] args) {
        Graphlist g = new Graphlist();
        g.creategraph(6);
        g.printgraph();
    }
}
class Node{
    public int item;
    public Node next;
    public int vertex1;
}
class Adjlist{
    private Node start;
    private int vertex;
    public Adjlist(){
        start = null;
    }
    public Adjlist(int vno){
        start = null;
        vertex = vno;
    }
    public void setAvertext(int v){
        vertex = v;
    }
    public void createnode(int data,int vno){
        Node n = new Node();
        n.item = data;
        n.vertex1 = vno;
        n.next = start;
        start = n;
    }
    public void printlist(){
        Node temp;
        if(start!=null){
            temp = start;
            while(temp!=null){
                System.out.print("("+temp.vertex1+","+temp.item+")");
                temp = temp.next;
            }
            System.out.println(" ");
        }
    }
}
class Graphlist{
    private int v_count;
    private Adjlist[]arr;
    public Graphlist(){
        v_count = 0;
        arr = null;
    }
    public void creategraph(int vno){
        int v,data;
        Scanner input = new Scanner(System.in);
        v_count = vno;
        arr = new Adjlist[v_count];
        for(int i =0;i<v_count;i++){
            arr[i].setAvertext(i);
            System.out.println("How many Adjacent Node of V"+i+"\n");
            v = input.nextInt();
            System.out.println("Enter the Data to Store");
            data = input.nextInt();
            arr[i].createnode(data, v);
        }
        input.close();
    }
    public void printgraph(){
        for(int i =0;i<v_count;i++){
            arr[i].printlist();
        }
        System.out.println(" ");
    }
}

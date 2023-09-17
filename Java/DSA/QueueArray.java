class Queue{
    private int capacity;
    private int rear,front;
    private int [] ptr;
    public Queue(int cap){
        capacity = cap;
        rear = -1;
        front = -1;
        ptr = new int[capacity];
    }
    public boolean isEmpty(){
        return front==-1&&rear == -1;
    }
    public boolean isFull(){
        return front == 0 && rear == capacity-1 || rear+1 == front;
    }
    public void insert(int data){
        if(isFull()){
            System.out.println("Queue is Full");
        }
        else if(isEmpty()){
            front = 0;
            rear = 0;
            ptr[rear] = data;
        }
        else if(rear == capacity-1){
            rear = 0;
            ptr[rear] = data;
        }
        else{
            rear++;
            ptr[rear] = data;
        }
    }
}
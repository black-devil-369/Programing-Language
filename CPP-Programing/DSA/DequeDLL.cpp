#include<iostream>
struct node{
    node *prev;
    int item;
    node *next;
};
class Deque{
    private:
       node *front;
       node *rear;
    public:
       Deque();
       void insertAtFront(int);
       void insertAtRear(int);
       void deleteFront();
       void deleteRear();
       ~Deque();
       node* getFront();
       node* getRear();
       int getFrontElement();
       int getRearElement();
       bool isEmpty();
       void printTheDeque();
};
Deque::Deque(){
    front = NULL;
    rear = NULL;
}
void Deque::printTheDeque(){
    node *temp;
    temp = front;
    while(temp!=NULL){
        std::cout<<temp->item<<" ";
        temp = temp->next;
    }
    std::cout<<" "<<std::endl;
}
bool Deque::isEmpty(){
    return front==NULL;
}
int Deque::getRearElement(){
    return rear->item;
}
int Deque::getFrontElement(){
    return front->item;
}
node* Deque::getRear(){
    return rear;
}
node* Deque::getFront(){
    return front;
}
Deque::~Deque(){
    while(front){
        deleteFront();
    }
}
void Deque::deleteRear(){
    node *ptr;
    if(rear){
        ptr = rear;
        if(rear==front){
            rear=front=NULL;
        }
        else{
            rear = rear->prev;
            rear->next = NULL;
        }
        delete ptr;
    }
}
void Deque::deleteFront(){
    node *temp;
    if(front){
        temp = front;
        if(front==rear){
            front=rear=NULL;
        }
        else{
            front = front->next;
            front->prev = NULL;
        }
        delete temp;
    }
}
void Deque::insertAtRear(int data){
    node *n = new node();
    n->prev = rear;
    n->item = data;
    n->next = NULL;
    if(rear){
        rear->next = n;
    }
    else
        front = n;
    rear = n;
}
void Deque::insertAtFront(int data){
    node *n = new node();
    n->prev = NULL;
    n->item = data;
    n->next = front;
    if(front){
        front->prev = n;
    }
    else
        rear = n;
    front = n;
}
// Deriver program for checking the code
int main(){
    Deque d;
    int N,b;
    std::cout<<"Enter the number for inserting Element in the Deque"<<std::endl;
    std::cin>>N;
    std::cout<<"Enter the Element at the front of Deque"<<std::endl;
    for(int i =0;i<N;i++){
        std::cin>>b;
        d.insertAtFront(b);
    }
    std::cout<<"Enter the Element at the rear of Deque "<<std::endl;
    for(int i =0;i<N;i++){
        std::cin>>b;
        d.insertAtRear(b);
    }
    d.printTheDeque();
    return 0;
}
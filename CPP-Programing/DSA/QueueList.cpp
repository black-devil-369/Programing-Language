#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
    int item;
    node *next;
};
class QueueList{
    private:
        node *rear,*front;
    public:
        QueueList();
        void insertAtfront(int);
        void insertAtrear(int);
        void printqueuelist();
        int getfront();
        int getrear();
        void del();
        ~QueueList();
};
QueueList::~QueueList(){
    while(front!=NULL){
        del();
    }
}
void QueueList::del(){
    node *temp;
    temp = front;
    front = front->next;
    delete temp;//free(temp)
}
int QueueList::getrear(){
    return rear->item;
}
int QueueList::getfront(){
    return front->item;
}
void QueueList::printqueuelist(){
    node *temp;
    temp = front;
    while(temp!=NULL){
        cout<<temp->item<<" ";
        temp = temp->next;
    }
    cout<<" "<<endl;
}
void QueueList::insertAtrear(int data){
    node *n = new node();
    n->item =data;
    n->next = NULL;
    if(rear==NULL){
        rear = front=n;
    }
    rear->next = n;
    rear = n;
}
void QueueList::insertAtfront(int data){
    node *n = new node();
    n->item = data;
    if(front==NULL){
        //n->next = front;
        front = rear = n;
    }
    n->next = front;
    front = n;
}
QueueList::QueueList(){
    rear=front=NULL;
}
// Driver Program for checking the code 
int main(){
    QueueList q1;
    q1.insertAtfront(35);
    q1.insertAtrear(42);
    q1.insertAtfront(38);
    q1.insertAtrear(100);
    q1.insertAtfront(200);
    cout<<q1.getfront()<<endl;
    cout<<q1.getrear()<<endl;
    q1.del();
    q1.printqueuelist();
    return 0;
}
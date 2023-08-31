#include<iostream>
#include<stdio.h>
using namespace std;
// creating a node object
struct node{
    int item;
    node *next;
};
// creating class SinglyLinkedList
class SLL{
    private:
       node *start;
    public:
       SLL();
       void insertatBegin(int);
       void insertatEnd(int);
       void insetatNode(node*,int);
       void reverse();
       void printlist();
};
SLL::SLL(){
    start = NULL;
}
// function to insert  a node at start
void SLL::insertatBegin(int data){
    // creating node
    node *n = new node();
    n->item = data;
    if(start==NULL){
        n->next = nullptr;
        start = n;
    }
    else{
        n->next = start;
        start = n;
    }
}
void SLL::printlist(){
    node *temp = start;
    while(temp!=NULL){
        cout<<temp->item<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
// function to at a node at the end of list
void SLL::insertatEnd(int data){
    // creating a node n
    node *temp;
    node *n = new node;
    n->item = data;
    n->next = NULL;
    if(start==NULL){
        start = n;
    }
    else{
        temp = start;
        while(temp->next !=NULL){
            temp = temp->next;
        }
        temp->next = n;
    }
}
void SLL::insetatNode(node* temp ,int data){
    // creating a node n;
    node *n = new node;
    n->item = data;
    if(temp){
        temp->next = n;
        n->next = temp->next;
    }
}
void SLL::reverse(){
    node *t1,*t2;
    if(start!=NULL && start->next!=NULL){
        t2 = NULL;
        do{
            t1 = start;
            start = start->next;
            t1->next = t2;
            t2 = t1;
        }while(start->next!=NULL);
        start->next = t1;
    }
    cout<<" "<<endl;
}
// Deriver code for checking code is running or not
int main(){
    SLL s;
    int n,b;
    cout<<"Enter the size for Entering number in SLL"<<endl;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>b;
        s.insertatBegin(b);
    }
    cout<<"Data enter by you inside an SLL"<<endl;
    s.printlist();
    s.reverse();
    cout<<"Revering the Singly Linked List"<<endl;
    s.printlist();
    return 0;
}
#include<iostream>
using namespace std;
struct node{
    int item;
    node *next;
};

class StackList{
    private:
       node *top;
    public:
       StackList();
       void push(int);
       int peek();
       void pop();
       ~StackList();
       void reverse();
       void printlist();
};
StackList::StackList(){
    top = NULL;
}
void StackList::push(int data){
    node *temp;
    node *n = new node();
    n->item = data;
    n->next = NULL;
    if(top==NULL){
        top = n;
    }
    else{
        temp = top;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = n;
    }
}
int StackList::peek(){
    return top->item;
}
void StackList::pop(){
    node *t;
    if(top!=NULL){
        t = top;
        top = top->next;
        delete t;
    }
}
StackList::~StackList(){
    while(top!=NULL){
        pop();
    }
}
void StackList::reverse(){
    node *t1,*t2;
    if(top!=NULL && top->next != NULL){
        t2 = NULL;
        do{
            t1 = top;
            top = top->next;
            t1->next = t2;
            t2 = t1;
        }while(top->next != NULL);
        top->next = t1;
    }
}
void StackList::printlist(){
    node *temp;
    temp = top;
    while(temp!=NULL){
        cout<<temp->item<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// Deriver program for checking the code
int main(){
    StackList s1;
    int n,b;
    cout<<"Enter the number for entering the number of inside an stack"<<endl;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>b;
        s1.push(b);
    }
    cout<<"You are Enter the number of Element inside an stack"<<endl;
    s1.printlist();
    cout<<"Printing the Reverse Stack after the inserting an element into the Stack"<<endl;
    s1.reverse();
    s1.printlist();
    s1.pop();
    cout<<"Printing the Element of stack after the pop one Element from the stack"<<endl;
    s1.printlist();
    return 0;
}
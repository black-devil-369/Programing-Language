#include<iostream>
using namespace std;
class Stack{
    private:
       int capacity;
       int top;
       int *ptr;
    public:
       Stack(int);
       void push(int);
       int peek();
       void pop();
       int count();
       bool isFull();
       bool isEmpty();
       void printdata();
       ~Stack();
};
Stack::~Stack(){
    delete []ptr;
}
Stack::Stack(int cap){
    capacity = cap;
    top = -1;
    ptr = new int[capacity];
}
void Stack::push(int data){
    if(isFull()){
        cout<<"Stack is Full"<<endl;
    }
    else{
        top++;
        ptr[top]=data;
    }
}
int Stack::peek(){
    return ptr[top];
}
int Stack::count(){
    return top+1;
}
void Stack::pop(){
    int i;
    if(isEmpty()){
        cout<<"Stack is underflow"<<endl;
    }
    else{
        for(i=0;i<=top;i++){
            ptr[i]=ptr[i+1];
        }
        top--;
    }
}
bool Stack::isFull(){
    return top == capacity-1;
}
bool Stack::isEmpty(){
    return top == -1;
}
void Stack::printdata(){
    if(top==-1){
        cout<<"Empty Stack"<<endl;
    }
    else{
        top =0;
        while(top<=capacity-1){
            cout<<peek()<<" ";
            top++;
        }
        cout<<endl;
    }
}

// Deriver Program for checking the code
int main(){
    Stack s1(4);
    s1.push(54);
    s1.push(78);
    s1.push(89);
    s1.push(100);
    s1.printdata();
    s1.pop();
    s1.printdata();
}
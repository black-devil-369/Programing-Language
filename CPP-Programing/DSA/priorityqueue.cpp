// implementation of priority Queue using linked list
#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
    int item;
    int pno;
    node *next;
};
class PriorityQueue{
    private:
       node *start;
    public:
       PriorityQueue();
       void insertData(int,int);
       void printlist();
};
PriorityQueue::PriorityQueue(){
    start = NULL;
}
void PriorityQueue:: insertData(int pno, int data){
    node *temp;
    node *n = new node();
    n->item = data;
    n->pno = pno;
    if(start==NULL || n->pno > start->pno){
        n->next = start;
        start = n;
    }
    else{
        temp = start;
        while(temp->next!=NULL){
            if(temp->next->pno >= pno){
                temp = temp->next;
            }
            else
                break;
        }
        n->next = temp->next;
        temp->next = n;
    }
}
void PriorityQueue::printlist(){
    node *temp;
    temp = start;
    cout<<"\t\n"<<"pno"<<" "<<"data\n";
    while(temp!=NULL){
        cout<<"\t\n"<<temp->pno<<" "<<temp->item<<" ";
        temp = temp->next;
    }
    cout<<" "<<endl;
}
// Deriver Program for checking the code
int main(){
    PriorityQueue pq;
    pq.insertData(5,60);
    pq.insertData(4,60);
    pq.insertData(6,100);
    pq.insertData(10,500);
    pq.insertData(9,456);
    pq.insertData(0,1000);
    pq.insertData(-1,2000);
    pq.insertData(11,2042);
    pq.printlist();
    return 0;

}
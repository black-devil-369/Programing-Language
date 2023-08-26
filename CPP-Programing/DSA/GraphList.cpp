#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
    int vertex;
    int item;
    node *next;
};
class AdjList{
    private:
       node *start;
       int vertex;
    public:
       AdjList();
       AdjList(int);
       void createnode(int,int);
       void setvertext(int);
       void removenode();
       void printlist();
       ~AdjList();
};
void AdjList::printlist(){
    node *temp;
    if(start){
        temp = start;
        while(temp){
            cout<<" ( "<<temp->vertex<<" , "<<temp->item<<")"<<endl;
            temp = temp->next;
        }
    }
}
AdjList::~AdjList(){
    while(start){
        removenode();
    }
}
void AdjList::removenode(){
    node *temp;
    if(start){
        temp =start;
        start = start->next;
        delete temp;
    }
}
void AdjList::setvertext(int v){
    vertex = v; 
}
void AdjList::createnode(int v , int data){
    node *n = new node();
    n->item = data;
    n->vertex = v;
    n->next = start;
    start = n;
}
AdjList::AdjList(){
    start = NULL;
}
AdjList::AdjList(int v){
    start = NULL;
    vertex = v;
}
class Graph{
    private:
       int v_count;
       AdjList *arr;
    public:
       Graph();
       void creategraph(int);
       void printgraph();
       ~Graph();
};
void Graph::printgraph(){
    for(int i =0;i<v_count;i++){
        cout<<endl;
        arr[i].printlist();
    }
    cout<<endl;
}
Graph::~Graph(){
    delete []arr;
}
void Graph::creategraph(int vno){
    int n,v,data;
    v_count = vno;
    arr = new AdjList[v_count];
    for(int i =0;i<v_count;i++){
        arr[i].setvertext(i);
        cout<<"\nHow many adjacent nodes of V"<<i<<" :";
        cin>>n;
        for(int j = 0;j<n;j++){ 
            cout<<"\n Enter the vertex number "<<endl;
            cin>>v;
            cout<<"\nEnter data to store"<<endl;
            cin>>data;
            arr[i].createnode(v,data);
        }
    }
}
Graph::Graph(){
    v_count = 0;
    arr = NULL;
}
// Deriver Program for Checking the working of the code;
int main(){
    Graph g;
    g.creategraph(6);
    g.printgraph();
    return 0;
}
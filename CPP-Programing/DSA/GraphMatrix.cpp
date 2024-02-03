#include<iostream>
#include "dynamicArray.cpp"
using namespace std;
class Graph{
    private:
      int v_count;
      int e_count;
      int **adj;
    public:
      int getV_count();
      void createGraph(int,int);
      void printmatrix();
      void printadjacentnode(int);
      bool isIsolated(int);
      Dynamic& adjacentNode(int);
      ~Graph();
};
Dynamic& Graph::adjacentNode(int N){
    Dynamic *p = new Dynamic(1);
    if(N<v_count && N>=0){
        for(int i=0;i<v_count;i++){
            if(adj[N][i]==1){
                p->append(i);
            }
        }
    }
    return *p;
}
int Graph::getV_count(){
    return v_count;
}
// code for destructor for deallocating the memory
Graph::~Graph(){
    for(int i =0;i<v_count;i++)
        delete []adj[i];
    delete []adj;
}
// function is used to creating an graph
void Graph::createGraph(int vno,int eno){
    int u,v;
    v_count = vno;
    e_count = eno;
    adj = new int*[v_count];
    for(int i =0;i<v_count;i++){
        adj[i] = new int[v_count];
    }
    // firstly assing 0 in all graph matrix
    for(int i =0;i<v_count;i++){
        for(int j = 0;j<v_count;j++){
            adj[i][j] = 0;
        }
    }
    // assing 1 in connecting node
    for(int i =0;i<e_count;i++){
        cout<<"\nEnter node numbers connecting edge:";
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
}
// code for printing matrix
void Graph::printmatrix(){
    cout<<endl;
    for(int i =0;i<v_count;i++){
        for(int j =0;j<v_count;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}
// code for printing adjacentnode
void Graph::printadjacentnode(int v){
    if(v<v_count && v>=0){
        for(int i=0;i<v_count;i++){
            if(adj[v][i]==1)
               cout<<endl<<"V"<<i;
        }
    }
}
// code for checking isoloated node
bool Graph::isIsolated(int v)
{
    bool flag = true;
    if(v<v_count && v>=0){
        for(int i =0;i<v_count;i++){
            if(adj[v][i]==1){
                flag = false;
                break;
            }
        }
    }
    return flag;
}
int main(){
    Graph g;
    g.createGraph(5,6);
    g.printmatrix();
    g.printadjacentnode(1);
    cout<<endl;
    return 0;
}

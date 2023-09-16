#include<iostream>
#include "GraphMatrix.cpp"
#include "QueueArray.cpp"
void bfs(Graph &,int);
// Deriver program for checking the working of code
int main(){
    Graph G;
    G.createGraph(6,9);
    bfs(G,0);
    std::cout<<std::endl;
    return 0;
}
void bfs(Graph &G,int s){
    int n,u,i;
    bool status[G.getV_count()];
    Queue Q(G.getV_count());
    Q.insert(s);
    status[s] = true;
    while(!Q.isEmpty()){
        n = Q.getFront();
        std::cout<<" V"<<n;
        Q.del();
        Dynamic adjacent = G.adjacentNode(n);
        for(i=0; i<adjacent.count();i++){
            u = adjacent.get(i);
            if(status[u]==false){
                Q.insert(u);
                status[u] = true;
            }
        }
    }
}
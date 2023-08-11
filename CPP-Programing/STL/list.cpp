#include<iostream>
#include<list>
using namespace std;
int main(){
    // creating a list
    list<int>gqlist;
    gqlist.push_back(35);
    gqlist.push_back(89);
    gqlist.push_back(100);
    list<int>::iterator it;
    for(it = gqlist.begin();it!=gqlist.end();++it){
        cout<<"\n\t"<<*it<<" ";
    }
    return 0;
}
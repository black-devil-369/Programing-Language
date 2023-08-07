#include<iostream>
#include<deque>
using namespace std;
void showdq(deque<int>g){
    deque<int>::iterator it;
    for(it = g.begin();it != g.end();++it){
        cout<<"\t\n"<<*it;
    }
    cout<<'\n';
}
int main(){
    deque<int>gquize;
    gquize.push_back(10);
    gquize.push_back(20);
    gquize.push_back(30);
    gquize.push_back(15);
    cout<<"The deque gquize is : ";
    showdq(gquize);
    cout<<"The maximum elements "<<gquize.max_size()<<endl;
    return 0;
}
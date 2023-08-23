#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    // creating forward list
    forward_list<int>flist1;
    flist1.push_front(35);
    flist1.push_front(89);
    flist1.push_front(90);
    flist1.push_front(65);
    forward_list<int>::iterator it;
    for(it = flist1.begin();it != flist1.end(); ++it){
        cout<<"\t\n"<<*it<<' ';
    }
    return 0;
}
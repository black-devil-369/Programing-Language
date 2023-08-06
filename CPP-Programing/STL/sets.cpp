#include<iostream>
#include<set>
using namespace std;
int main(){
    // create a sets
    set<int>s1;
    set<int,greater<int> > s2;
    s1.insert(10);
    s1.insert(90);
    s1.insert(70);
    s1.insert(45);
    s1.insert(45);
    s1.insert(90);
    cout<<"Element of S1\n";
    for(auto i = s1.begin();i != s1.end();i++){
        cout<<*i<<" ";
    }
    // copy all the data inside a s2
    for(auto i : s1){
        s2.insert(i);
    }
    // print the element of s2
    cout<<"\nElement of S2 "<<endl;
    for(auto i : s2){
        cout<< i << " ";
    }
    return 0;
}
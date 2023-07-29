#include<iostream>
#include<stack>
#include<set>
using namespace std;
int main(){
    stack<int>s1;
    s1.push(25);
    s1.push(89);
    s1.push(53);
    s1.push(90);
    while(!s1.empty()){
        cout<< s1.top()<<" ";
        s1.pop();
    }
}
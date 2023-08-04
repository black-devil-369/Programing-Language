#include<iostream>
#include<stack>
#include<vector>
#include<queue>
using namespace std;
void showStack(int arr[],int n){
    stack<int>s1;
    for(int i =0; i<n;i++){
        s1.push(arr[i]);
    }
    cout<<"\n Stack Element : "<<endl;
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
}
void showQueue(int arr[],int n){
    priority_queue<int>p1;
    queue<int>p2;
    for(int i = 0; i < n ;i++){
        p1.push(arr[i]);
        p2.push(arr[i]);
    }
    cout<<"\nThe Element of Priority Queue is by using Default concept of Max Heap"<<endl;
    while(!p1.empty()){
        cout<<p1.top()<<" ";
        p1.pop();
    }
    cout<<"\nThe  Front elment of queue "<<endl;
    while(!p2.empty()){
        cout<<p2.front()<<" ";
        p2.pop();
    }
}
int main(){
    int arr[] = {500,62,90,24,89,24,20};
    int N = sizeof(arr)/sizeof(arr[0]);
    showStack(arr,N);
    showQueue(arr,N);
    return 0;
}

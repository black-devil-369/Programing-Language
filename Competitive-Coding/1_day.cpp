#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    int a,n;
    cin>>n;
    vector<int>v1;
    cout<<"Enter the element inside in vector"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a;
        v1.push_back(a);
    }
    set<int>s1(v1.begin(),v1.end());
    for(auto i = s1.begin(); i!=s1.end(); ++i){
        cout<<*i<<" ";
    }
    cout<<"\n";
    return 0;
}
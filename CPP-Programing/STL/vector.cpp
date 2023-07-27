#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    // syntax to create vector
    // vector<data_typd>vector_name;
    vector<int>v;
    // add data inside an vector
    v.push_back(35);
    v.push_back(32);
    v.push_back(90);
    v.push_back(67);
    // using for loop to printing the vector
    cout<<"\nVector elements"<<endl;
    for(auto i = v.begin(); i !=v.end();++i){
        cout<<*i<<" ";
    }
    cout<<"\nSets elements :"<<endl;
    set<int>s2(v.begin(),v.end());
    for(auto i :s2){
        cout<< i<<" ";
    }
    return 0;
}
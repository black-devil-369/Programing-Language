#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_multimap<string,int>umm1;
    unordered_multimap<string,int>umm2(
       {
        {"apple",1},
        {"ball",2},
        {"apple",10},
        {"cat",7},
        {"dog",9},
        {"cat",6},
        {"apple",1},
       } 
    );
    unordered_map<string,int>::iterator it;
    for(it = umm2.begin();it !=umm2.end(); ++it){
        cout<<" < "<<it->first <<", "<<it->second
              <<"> ";
        cout<<endl;
    }
    return 0;
}
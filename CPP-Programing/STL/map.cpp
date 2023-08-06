#include<iostream>
#include<map>
using namespace std;
int main(){
    // create a map of string to integers
    map<string,int>map1;
    map1["one"] = 1;
    map1["two"] = 2;
    map1["three"] = 3;
    // creating an iterator for map
    map<string,int>::iterator it;
    for(it = map1.begin();it!=map1.end();++it){
        cout<<"\t\n"<<it->first<<" "<<it->second<<" ";
    }
    return 0;
}
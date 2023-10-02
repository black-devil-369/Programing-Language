#include<iostream>
#include<iterator>
#include<map>
using namespace std;
int main(){
    // creating multimap
    multimap<int,int>gquize;
    gquize.insert(pair<int,int>(1,80));
    gquize.insert(pair<int,int>(2,80));
    gquize.insert(pair<int,int>(3,67));
    gquize.insert(pair<int,int>(4,90));
    gquize.insert(pair<int,int>(5,100));
    multimap<int,int>::iterator it;
    cout<<"\tKEY\tELEMENT\n";
    for(it = gquize.begin();it!=gquize.end();++it){
        cout<<"\t"<<it->first<<"\t"<<it->second
            <<'\n';
    }
    cout<<endl;
    return 0;
}
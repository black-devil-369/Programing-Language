#include<iostream>
using namespace std;
int even(int n){
    if(n>0){
        even(n-1);
        return 2*n;
    }
    return 0;
}
int main(){
    cout<<even(4)<<endl;
}
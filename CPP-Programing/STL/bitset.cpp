#include<bitset>
#include<iostream>
using namespace std;
int main(){
    bitset<8>uninitializedBitset;
    bitset<8>decimalBitset(15);
    bitset<8>stringBitset(string("1111"));
    cout<<"Uninitialized bitset : "<<uninitializedBitset
        << endl;
    cout<<"Initialize with decimal : "<<decimalBitset
        << endl;
    cout<< " Initialized with string : "<<stringBitset
        <<endl;
    return 0;
}
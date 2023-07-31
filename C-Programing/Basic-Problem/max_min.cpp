#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
struct Pair
{
    /* data */
     int min;
     int max;
};
struct Pair getMinMax(int arr[],int n){
    struct Pair minmax;
    sort(arr,arr+n);
    minmax.min = arr[0];
    minmax.max = arr[n-1];
    return minmax;
};
int main(){
    int arr[] = {1000,11,445,1,330,3000};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    vector<int>v1;
    cout<<"\nReverse array element"<<endl;
    for(int i =0;i<arr_size;i++){
        v1.push_back(arr[i]);
    }
    for(auto i = v1.rbegin();i!=v1.rend();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    sort(v1.begin(),v1.end());
    for(auto i : v1){
        cout<<i<<endl;
    }
    struct Pair minmax = getMinMax(arr,arr_size);
    cout<<"\nMinimum element is :"<<minmax.min;
    cout<<"\nMaximum element is :"<<minmax.max;
    return 0;
}

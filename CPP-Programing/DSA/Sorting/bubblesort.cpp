#include<iostream>
using namespace std;
int main(){
    int i,j;
    bool swaped;
    int n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n;i++){
        swaped = false;
        for(j=0;j<n-i-1;j++){
            if(arr[j]>=arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped = true;
            }
        }
        if(swaped==false){
            break;
        }
    }
    cout<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
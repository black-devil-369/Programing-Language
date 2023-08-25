#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    int i, j, min_idx;
    for(i=0;i<n-1;i++){
        min_idx = i;
        for(j=i+1;j<n;j++){
            if(arr[j]>arr[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx!=i){
            swap(arr[min_idx],arr[i]);
        }
    }
}
void printArray(int arr[] , int size){
    int i;
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr1[] = {45, 64, 42, 90, 20};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    selectionSort(arr1,n1);
    printArray(arr1,n1);
    cout<<"Another Problem solved :"<<endl;
    cout<<endl;
    int i, j, min_idx,n;
    cout<<"Enter the size for arrays: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the Element inside an arrays : "<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Element Enter by you inside an array is : " <<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n;i++){
        min_idx = i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx!=i){
            swap(arr[min_idx],arr[i]);
        }
    }
    cout<<"After the Sorting an arrays "<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
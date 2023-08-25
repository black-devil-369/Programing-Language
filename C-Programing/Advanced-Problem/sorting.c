// Seclection Sort Program
#include<stdio.h>
void swap(int *x , int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void selectionSort(int arr[],int n){
    int i,j,min_idx;
    for(i = 0; i<n; i++){
        min_idx = i;
        for(j = i+1; j<n; j++){
            if(arr[j]<arr[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx!=i){
            swap(&arr[min_idx],&arr[i]);
        }
    }
}
int main(){
    int n;
    printf("Enter the size for an arrays :\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Element inside an arrays : \n");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Element Enter by you inside an arrays is : \n");
    for(int i = 0; i<n; i++){
        printf("%d",arr[i]);
        printf(" ");
    }
   // printf(" ");
    int N = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,N);
    printf("\nSorted Arrays is :\n");
    for(int i =0; i<N; i++){
        printf("%d",arr[i]);
        printf(" ");
    }
    printf(" ");
    return 0;
}
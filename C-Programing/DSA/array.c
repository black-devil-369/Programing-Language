#include<stdio.h>
#include<stdlib.h>
struct Array
{
    /* data */
    int capacity;
    int lastindex;
    int *ptr;
};
struct Array createArray(int cap){
    struct Array a;
    a.capacity = cap;
    a.lastindex = -1;
    a.ptr = (int *)malloc(a.capacity * sizeof(int));
    if(a.ptr == NULL){
        printf("Memory allocation failed. \n");
        exit(1);
    }
    return a;
}
void append(struct Array *arr,int data){
    if(arr->lastindex == arr->capacity-1){
        printf("Array is Full");
    }
    else{
        arr->lastindex++;
        arr->ptr[arr->lastindex] = data;
    }
}
void printarray(struct Array *arr){
    for(int i = 0;i<=arr->lastindex;i++){
        printf("\n%d",arr->ptr[i]);
    }
    printf(" ");
}
int main(){
    struct Array myarr = createArray(5);
    append(&myarr,42);
    append(&myarr,90);
    append(&myarr,89);
    append(&myarr,52);
    append(&myarr,14);
    printarray(&myarr);
    return 0;
}
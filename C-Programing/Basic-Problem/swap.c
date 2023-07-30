#include<stdio.h>
void swap(int*,int*);
int main(){
    int a,b;
    printf("Enter two number \n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("a=%d b = %d",a,b);
    printf("\n");
    return 0;
}
void swap(int *x,int *y){
    int temp ;
    temp = *x;
    *x = *y ;
    *y = temp;
}
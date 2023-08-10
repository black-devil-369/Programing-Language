#include<stdio.h>
int main(){
    int n ;
    printf("Enter your number \n");
    scanf("%d",&n);
    printf("List of divisor of %d  :",n);
    for(int i =1;i<=n;i++){
        if(n%i==0){
            printf("%d " , i);
        }
    }
    return 0;
}
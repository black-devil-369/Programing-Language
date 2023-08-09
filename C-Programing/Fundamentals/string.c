#include<stdio.h>
int main(){
    char arr[10]= {'B','H','P','A','L'};
    char str[10] = "BHOPAL";
    /*for(int i=0;i<=9;i++){
        printf("%c",arr[i]);
    }
    printf("\n");
    for(int i =0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
    printf("%s",arr);
    printf("\n");
    */
   for(int i=0;arr[i];i++){
       printf("Lenght : %d\n",i);
   }
   for(int i =0;str[i];i++){
    printf("%c",str[i]);
   }
    return 0;
}
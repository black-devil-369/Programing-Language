#include<stdio.h>
// declaring the macros
#define Max 5
int main(){
    int n,d,num,x,y,p,q,k,i,j,l,cp,sp,size;
    // Program One
    printf("Enter the number please :\n");
    scanf("%d", &n);
    if(n>0){
        printf("It is positive number\n");
    }
    else if(n<0){
        printf("It is negative number");
    }
    else{
        printf("It is zero number\n");
    }

    // Program Second
    printf("Enter the number :\n");
    scanf("%d",&d);
    if(d%5==0){
        printf("It is divisible by %d \n",Max);
    }
    else{
        printf("%d is not divisible by %d \n",d,Max);
    }
    // Program Third

    printf("Enter the number for checking is Even or ODD\n");
    scanf("%d",&num);
    if(num%2==0){
        printf("%d is Even number \n",num);
    }
    else{
        printf("%d is Odd number \n",num);
    }
    // Program Fourth
    printf("Enter the number for checking the is Even or Odd without using of %% : ");
    scanf("%d",&x);
    if(n & 1){
        printf("%d is Odd number \n",x);
    }
    else{
        printf("%d is Even number \n",x);
    }
    // Program Five
    printf("Enter the number for checking the number is three digit number or not : \n");
    scanf("%d",&y);
    if(y>=100 && y<=999){
        printf("%d is three digit number \n",y);
    }
    else{
        printf("%d is not three digit number \n",y);
    }
    // Program Sixth

    printf("Enter the two number please for swapping without using of third variable  \n");
    scanf("%d %d",&p,&q);
    printf("%d and %d \n",p,q);
    p = q+p;
    q = p-q;
    p = p-q;
    printf("%d %d\n",p,q);

    // Program Seventh

    printf("Enter the number for Checking the leap or not \n");
    scanf("%d",&k);
    if((k%4==0 && k%100!=0 ) || k%400==0){
        printf("%d is a leap year number \n",k);
    }
    else{
        printf("%d is not a leap year number \n",k);
    }

    // Program Eight
    printf("Enter the three number please \n");
    scanf("%d %d %d",&i,&j,&k);
    printf("First is: %d \n Second is %d \n Third is %d \n",i,j,k);
    if(i>j && i>k){
        printf("%d is greatest number \n",i);
    }
    else if(j>i && j>k){
        printf("%d is greatest number \n",j);
    }
    else{
        printf("%d is greatest number \n",k);
    }

    // Program Nine
    printf("Enter the CP and SP for Calculating the Profit and Lost %%\n");
    scanf("%d %d",&cp,&sp);
    printf("Cp is : %d and Sp is %d\n",cp,sp);
    if(sp>cp){
        int Profit = ((sp-cp)*100)/cp;
        printf("Profit is: %d%%\n",Profit);
    }
    else{
        int Lost = ((cp-sp)*100)/cp;
        printf("Lost is: %d%%\n",Lost);
    }

    // Program Ten
    printf("Enter the size for an array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the marks of subject inside an arrays\n");
    for(int i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i<size; i++){
        if(arr[i]>=33 && arr[i]<=100){
            printf("The Candidate is Passed %d marks \n",arr[i]);
        }
        else{
            printf("The Candidate is Failed  %d marks\n",arr[i]);
        }
    }
    return 0;
}

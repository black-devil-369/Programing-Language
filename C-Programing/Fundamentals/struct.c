#include<stdio.h>
// structure using struct keywords
struct Book {
    int bookid;
    char title[20];
    float price;
};
struct Book input(){
    struct Book b;
    printf("Enter the bookid , title and price\n");
    scanf("%d",&b.bookid);
    fflush(stdin);
    b.title[strlen(b.title)-1]= '\0';
    fgets(b.title,20,stdin);
    scanf("%f",&b.price);
    return b;
}
void display(struct Book b1){
    printf("%d,%s,%f",b1.bookid,b1.title,b1.price);
}
int main(){
    struct Book b3;
    // calling the input function
    b3 = input();
    // calling the display function;
    display(b3);
    return 0;
}
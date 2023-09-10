#include<iostream>
#include<string.h>
struct Book{
    int bookid;
    char title[20];
    float price;
};
struct Book inputBook();
void displayBook(struct Book);
int main(){
    struct Book b2,b3;
    struct Book b1 = {1, "Jai Maa kali",456.0f};
    b2.bookid = 2;
    strcpy(b2.title,"Ajay Chauhan");
    b2.price = 4500.0f;
    b3 = inputBook();
    displayBook(b1);
    displayBook(b2);
    displayBook(b3);
}
struct Book inputBook(){
    struct Book b;
    std::cout<<"Enter the Bookid , Title , And Price "<<std::endl;
    std::cin>>b.bookid;
    std::cin.ignore();
    std::cin.getline(b.title,20);
    std::cin>>b.price;
    return b;
}
void displayBook(struct Book b){
    std::cout<<b.bookid<<" "<<b.title<<" "<<b.price<<std::endl;
}
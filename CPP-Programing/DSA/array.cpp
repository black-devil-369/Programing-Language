#include<iostream>

class Array{
    private:
      int capacity;
      int lastindex;
      int *ptr;
    public:
      Array(int);
      void append(int);
      
};
// constructor body declaration
Array::Array(int cap){
    capacity = cap;
    lastindex = -1;
    ptr = new int[capacity];
}
// function declaration to add element data in the array class
void Array::append(int data){
    if(lastindex==capacity-1){
        std::cout<<"Array is Full"<<std::endl;
    }
    lastindex++;
    ptr[lastindex] = data;
}
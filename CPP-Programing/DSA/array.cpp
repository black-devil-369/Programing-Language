#include<iostream>

class Array{
    private:
      int capacity;
      int lastindex;
      int *ptr;
    public:
      Array(int);
      void append(int);
      bool isFull();
      bool isEmpty();
      int count();
      int get(int);
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
// code for checking isFull;
bool Array::isFull(){
    return lastindex == capacity-1;
}
// code for checking isEmpty
bool Array::isEmpty(){
    return lastindex == -1;
}
// function for count total number of element in arrays
int Array::count(){
    return lastindex+1;
}
// function for return element at an index
int Array::get(int index){
    if(index>=lastindex && index<=capacity-1)
       return ptr[index];
}
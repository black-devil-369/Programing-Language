#include<iostream>
using namespace std;
class Dynamic{
    private:
       int capacity;
       int lastindex;
       int *ptr;
    public:
       Dynamic(int);
       void doublearray();
       void halfarray();
       int size();
       bool isEmpty();
       bool isFull();
       void append(int);
       void insert(int,int);
       int find(int);
       int count();
       int get(int);
};
int Dynamic::get(int index){
    if(index >= 0 && index <= lastindex){
        return ptr[index];
    }
    std::cout<<"Invalid index"<<std::endl;
    return -1;
}
int Dynamic::count(){
    return lastindex+1;
}
int Dynamic::find(int data){
    int i ;
    for(i = 0; i<=lastindex; i++){
        if(ptr[i]==data){
            return i;
        }
    }
    return -1;
}
// declaring code for constructor
Dynamic::Dynamic(int cap){
    capacity = cap;
    lastindex = -1;
    ptr = new int[capacity];
}
// declaring code for double array
void Dynamic::doublearray(){
    int *temp = new int[capacity*2];
    for(int i=0;i<=lastindex;i++){
        temp[i]=ptr[i];
    }
    delete []ptr;
    ptr = temp;
    capacity*=2;
}
// code for halfarray();
void Dynamic::halfarray(){
    int *temp = new int[capacity/2];
    for(int i = 0;i<=lastindex;i++){
        temp[i] = ptr[i];
    }
    delete []ptr;
    temp = ptr;
    capacity/=2;
}
// code for size of array
int Dynamic::size(){
    return capacity;
}
// code for checking isempty array;
bool Dynamic::isEmpty(){
    return lastindex == -1;
}
// code for checking isfull array;
bool Dynamic::isFull(){
    return lastindex == capacity-1;
}
// code for add element inside an array
void Dynamic::append(int data){
    if(isFull()){
        doublearray();
    }
    lastindex++;
    ptr[lastindex] = data;
}
// insert an element at a specfic index
void Dynamic::insert(int index,int data){
    int i;
    if(index<0 || index>lastindex+1)
       cout<<endl<<"Invalid Index";
    else{
        if(isFull())
           doublearray();
        for(i=0;i<=lastindex;i++){
            ptr[i+1] = ptr[i];
        }
        ptr[index] = data;
        lastindex++;
    }
}
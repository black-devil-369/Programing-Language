#include<iostream>
using namespace std;
#define EMPTY_HEAP -2
class Heap{
    private:
        int capacity;
        int lastindex;
        int *ptr;
    public:
         Heap(int);
         void append(int);
         bool isEmpty();
         bool isFull();
         void doublearray();
         void halfArray();
         int size();
         int get(int);
         int count();
         void insert(int);
         int del();
        // void heap_sort();
};
/*void Heap::heap_sort(){
    cout<<"Sorted Heap is"<<endl;
    for(int i = count()-1;i>=0;i--){
        cout<<del()<<" ";
    }
    cout<<endl;
}
*/
int Heap::del(){
    int i ,item,temp,index,leftIndex,rightIndex;
    if(isEmpty()){
        throw EMPTY_HEAP;
    }
    else{
        item = ptr[0];
        temp = ptr[lastindex];
        lastindex--;
        index =0;
        leftIndex = 1;
        rightIndex = 2;
        while(leftIndex<lastindex){
            if(ptr[leftIndex]>ptr[rightIndex]){
                if(temp<ptr[leftIndex]){
                    ptr[index] = ptr[leftIndex];
                    index = leftIndex;
                }
                else
                    break;
            }
            else{
                if(temp<ptr[rightIndex]){
                    ptr[index] = ptr[rightIndex];
                    index = rightIndex;
                }
                else
                    break;
            }
            leftIndex = 2*index+1;
            rightIndex = 2*index+2;
        }
        if(leftIndex==lastindex && temp<ptr[leftIndex]){
            ptr[index] = ptr[leftIndex];
            index = leftIndex;
        }
        ptr[index] = temp;
        if(capacity/2>=lastindex+1 && capacity>1)
            halfArray();
        return item;
    }
}
void Heap::insert(int data){
    int i ,index,parIndex;
    if(isFull())
        doublearray();
    for(index=lastindex+1;index>0;index=parIndex){
        parIndex = (index-1)/2;
        if(ptr[parIndex]<data){
            ptr[index] = ptr[parIndex];
        }
        else
            break;
    }
    ptr[index] = data;
    lastindex++;
}
int Heap::count(){
    return lastindex+1;
}
int Heap::get(int index){
    if(index<0 && lastindex>capacity-1){
        cout<<"Invalid index"<<endl;
    }
    return ptr[index];
}
int Heap::size(){
    return capacity;
}
void Heap::halfArray(){
    int *temp = new int[capacity/2];
    for(int i =0;i<=lastindex;i++){
        temp[i] = ptr[i];
    }
    delete []ptr;
    ptr = temp;
    capacity/=2;
}
void Heap::doublearray(){
    int *temp = new int[capacity*2];
    for(int i =0;i<=lastindex;i++){
        temp[i] = ptr[i];
    }
    delete []ptr;
    ptr = temp;
    capacity = 2*capacity;
}
bool Heap::isFull(){
    return lastindex == capacity-1;
}
bool Heap::isEmpty(){
    return lastindex==-1;
}
void Heap::append(int data){
    if(isFull()){
        cout<<"Heap is Full"<<endl;
    }
    lastindex++;
    ptr[lastindex] = data;
}
Heap::Heap(int cap)
{
    capacity = cap;
    lastindex = -1;
    ptr = new int[capacity];
}
// Deriver Program For checking the working of code
void heap_sort(int A[],int N)
{
    Heap obj(N);
    for(int i=0;i<N;i++)
        obj.insert(A[i]);
    for(int i=N-1;i>=0;i--)
        A[i]=obj.del();
}
int main(){
    int A[]={77,43,90,81,21,35,16,50,18,70};
    heap_sort(A,10);
    cout<<endl;
    for(int i=0;i<=9;i++)
        cout<<" "<<A[i];
    cout<<endl;
    return 0;
}
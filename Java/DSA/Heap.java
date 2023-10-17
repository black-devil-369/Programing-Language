import java.util.*;
public class Heap{
    public static void main(String[] args){
        int[]A = new int[]{77,43,90,81,21,35,16,50,18,70};
        int N = A.length;
        HeapDSA hp = new HeapDSA(N);
        for(int i =0;i<N;i++){
            hp.insert(A[i]);
        }
        for(int i =0;i<N;i++){
            System.out.print(hp.get(i)+" ");
        }
        System.out.println(" ");
    }
}
class HeapDSA{
    private int capacity;
    private int lastindex;
    private int[] ptr;
    // creating an constructur to insitialize memember variable of class
    public HeapDSA(int cap){
        capacity = cap;
        lastindex = -1;
        ptr = new int[capacity];
    }
    public int count(){
        return lastindex+1;
    }
    // function to creating a half array
    public void halfArray(){
        int[] temp = new int[capacity/2];
        for(int index =0; index <= lastindex; index++){
            temp[index] = ptr[index];
        }
        ptr = null;
        ptr = temp;
        capacity/=2;
    }
    public int get(int index){
        if(index>=0 && index<=lastindex){
            return ptr[index];
        }
        return -1;
    }
    // function to creating a double array
    public void doubleArray(){
        int[] temp = new int[2*capacity];
        for(int i = 0 ;i<=lastindex; i++){
            temp[i] = ptr[i];
        }
        ptr = temp;
        capacity*=2;
    }
    public int del(){
        int index, item, temp, leftchild, rightchild;
        if(isEmpty()){
            System.out.println("Heap is Empty ");
        }
        item = ptr[0];
        temp = ptr[lastindex];
        lastindex--;
        index = 0;
        leftchild = 1;
        rightchild = 2;
        while(leftchild<lastindex){
            if(ptr[leftchild]>ptr[rightchild]){
                if(temp<ptr[leftchild]){
                    ptr[index] = ptr[leftchild];
                    index = leftchild;
                }
                else{
                    break;
                }
            }
            else{
                if(temp<ptr[rightchild]){
                    ptr[index] = ptr[rightchild];
                    index = rightchild;
                }
                else{
                    break;
                }
            }
            leftchild = (2*index)+1;
            rightchild = (2*index)+2;
        }
        if(leftchild == lastindex && temp < ptr[leftchild]){
            ptr[index] = ptr[leftchild];
            index = leftchild;
        }
        if(capacity/2>=lastindex+1 && capacity>1){
            halfArray();
        }
        return item;
    }
    // function to insert data in the heap;
    public void insert(int data){
        int index , parIndex;
        if(isFull()){
            doubleArray();
        }
        else{
            for(index = lastindex+1; index>0; index=parIndex){
                parIndex = (index-1)/2;
                if(ptr[parIndex]<data){
                    ptr[index] = ptr[parIndex];
                }
                else{
                    break;
                }
            }
            ptr[index] = data;
            lastindex++;
        }
    }
    // checking heap is empty;
    public boolean isEmpty(){
        return lastindex ==-1;
    }
    // checking heap is full
    public boolean isFull(){
        return lastindex == capacity-1;
    }
    public void heapSort(){

        for(int index = lastindex; index>=0; index--){
            ptr[index] = del();
        }
    }
}
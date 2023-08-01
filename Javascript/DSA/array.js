class Arrays{
    // this is variable in class
    capacity;
    lastindex;
    ptr;
    // creating a constructor to initialize class variable
    constructor(cap){
        this.capacity = cap;
        this.lastindex = -1;
        this.ptr = [];
    }
    // function to check array is empty 
    isEmpty(){
        return this.lastindex == -1;
    }
    // function is to check array is full
    isFull(){
        return this.lastindex==this.capacity-1;
    }
    // function is used to add data in the array
    append(data){
        if(this.isFull()){
            console.log("Arrays is Full");
        }
        else{
            this.lastindex++;
            this.ptr[this.lastindex]=data;
        }
    }
    // function is used to access the data at the index
    get(index){
        if(index>=0 && index<=this.lastindex)
           return this.ptr[index];
    }
    // function is used to count total element inside an arrays
    count(){
        return this.lastindex+1;
    }
    // function is used to insert a data at a specficed index
    insert(index,data){
        if(index>=this.lastindex || index<=this.capacity-1)
           this.ptr[index]=data;
    }
}
const  a = new Arrays(4);
a.append(56);
a.append(35);
a.append(90);
a.append(39);
console.log(a.isEmpty());
console.log(a.isFull());
console.log(a.count());
for(let i = 0;i<a.count();i++){
    console.log(a.get(i)+ " ");
}
a.insert(2,500);
console.log("After inserting data at a specific index");
for(let i=0;i<a.count();i++){
    console.log(a.get(i)+" ");
}

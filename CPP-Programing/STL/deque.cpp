#include<iostream>
#include<deque>
using namespace std;
class Student{
    private:
         char name;
         int age;
         char email;
    public:
         Student(const char,int,const char);
         void showdata();
};
void Student::showdata(){
    cout<<name<<" "<<age<<" "<<email;
}
Student::Student(const char a1,int b2, const char e2){
    name = a1;
    age = b2;
    email = e2;

}
void showdq(deque<int>g){
    deque<int>::iterator it;
    for(it = g.begin();it != g.end();++it){
        cout<<"\t\n"<<*it;
    }
    cout<<'\n';
}
int main(){
    deque<int>gquize;
    deque<Student>d2;
    d2.push_back(Student('A',24,'C'));
    deque<Student>::iterator it2;
    for(it2 = d2.begin(); it2!=d2.end(); it2++){
        cout<<endl;
        it2->showdata();
    }
    std::cout<<" "<<std::endl;
    gquize.push_back(10);
    gquize.push_back(20);
    gquize.push_back(30);
    gquize.push_back(15);
    cout<<"The deque gquize is : ";
    showdq(gquize);
    cout<<"The maximum elements "<<gquize.max_size()<<endl;
    return 0;
}
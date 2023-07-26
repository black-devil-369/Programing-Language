#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<("Enter the number for day ");
    cin>>n;
    if(n>0 && n<=7){
        switch (n)
        {
        case 1:
            cout<<"Sunday"<<endl;
            break;
        case 2:
            cout<<"Monday"<<endl;
            break;
        case 3:
            cout<<"Tuesday"<<endl;
            break;
        case 4:
            cout<<"Wednesday"<<endl;
            break;
        case 5:
            cout<<"Thursday"<<endl;
            break;
        case 6:
            cout<<"Friday"<<endl;
            break;
        case 7:
            cout<<"Saturday"<<endl;
            break;
        default:
            cout<<"Done!"<<endl;
            break;
        }
    }
    cout<<"DONE !"<<endl;
    return 0;
}
#include<iostream>
void natural(long long );
int main(){
    long long  N;
    std::cin>>N;
    natural(N);
}
void natural(long long n){
    try
    {
        if(n<=0){
            throw n;
        }
        if(n==1){
            std::cout<<n<<" ";
        }
        if(n>1){
            std::cout<<n<<" ";
            natural(n-1);
        }
    }
    catch(long long  e)
    {
        std::cout<<e<<std::endl;
    }
    
}
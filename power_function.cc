#include<iostream>

int getPower(uint64_t n,int p=2);

int main()
{
    std::cout<<"n,p : ";
    uint64_t n{};
    int p{};
    std::cin>>n>>p;
    std::cout<<"result : "<<(p>2?getPower(n,p):getPower(n))<<"\n";
    return 0;
};

int getPower(uint64_t n,int p)
{
    if(p==1)return n;
    return getPower(n,p-1)*n;
};

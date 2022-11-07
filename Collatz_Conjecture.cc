//Recursion
//solving problems in recursion way!
//Copyright(c)2022 Vishal Ahirwar. All rights reserved.

#include<iostream>

void CollatzConjecture(uint64_t n);
void getLenOfCollatzConjecture(uint64_t n,uint64_t&len);

int main()
{
    std::cout<<"n??";
    uint64_t input{};
    std::cin>>input;
    CollatzConjecture(input);
    std::cout<<"\n";
    uint64_t len{};
    getLenOfCollatzConjecture(input,len);
    std::cout<<"length of Collatz Conjecture "<<input<<" is : "<<len<<"\n";
    return 0;
};

void CollatzConjecture(uint64_t n)
{
    std::cout<<n;
    if(n==1)return;
    std::cout<<" ";
    if(n%2==0)CollatzConjecture(n/2);
    else CollatzConjecture(3*n+1);
};

void getLenOfCollatzConjecture(uint64_t n,uint64_t&len)
{
    ++len;
    if(n==1)return;
    if(n%2==0)getLenOfCollatzConjecture(n/2,len);
    else getLenOfCollatzConjecture(3*n+1,len);
};

//Recursion
//solving problems in recursion way!
//Copyright(c)2022 Vishal Ahirwar. All rights reserved.

#include<iostream>
#define NEWLINE printf("\n");

uint64_t max(uint64_t*arr,size_t len);
uint64_t sum(uint64_t*arr,size_t len);
double avg(uint64_t*arr,size_t len);
void increement(uint64_t*arr,size_t len);
void print(uint64_t*arr,size_t len);
void accumulate(uint64_t*arr,size_t len);

int main()
{
    uint64_t arr[]={1,8,2,10,3};
    print(arr,sizeof(arr)/sizeof(arr[0]));
    NEWLINE
    increement(arr,sizeof(arr)/sizeof(arr[0]));
    print(arr,sizeof(arr)/sizeof(arr[0]));
    NEWLINE
    uint64_t test[]={1,2,3,4,5};
    std::cout<<"avg test : "<<avg(test,sizeof(test)/sizeof(test[0]));
    NEWLINE
    std::cout<<"accumulate : ";
    accumulate(arr,sizeof(arr)/sizeof(arr[0]));
    NEWLINE
    return 0;
};

uint64_t max(uint64_t*arr,size_t len)
{
    static uint64_t value{arr[len-1]};
    if(len==0)return value;
    if(arr[len-1]>value)
    {
        value=arr[len-1];
        return max(arr,len-1);
    }else
    {
        return max(arr,len-1);
    };
};

uint64_t sum(uint64_t*arr,size_t len)
{
    if(len==0)return 0;
    return sum(arr,len-1)+arr[len-1];
};

double avg(uint64_t*arr,size_t len)
{
    if(len==0)return 0.0;
    return ((double)avg(arr,len-1)+arr[len-1]);
};

void increement(uint64_t*arr,size_t len)
{
    if(len==0)return;
    arr[len-1]+=(len-1);
    increement(arr,len-1);
};

void print(uint64_t*arr,size_t len)
{
    if(len==0)return;
    print(arr,len-1);
    std::cout<<arr[len-1]<<" ";
};

void accumulate(uint64_t*arr,size_t len)
{
    static uint64_t sum{0};
    if(len==0)return;
    accumulate(arr,len-1);
    sum+=arr[len-1];
    std::cout<<sum<<" ";
};

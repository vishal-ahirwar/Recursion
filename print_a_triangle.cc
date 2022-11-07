//Recursion
//solving problems in recursion way!
//Copyright(c)2022 Vishal Ahirwar. All rights reserved.

#include<iostream>

void printTriangle(int level);
void printTriangleReverse(int level);

int main()
{
    int input{};
    std::cout<<"Levels of Triangle ??";
    std::cin>>input;
    printTriangle(input);
    std::cout<<"\nReverse Version :\n";
    printTriangleReverse(input);
    return 0;
};
void printTriangle(int level)
{
    if(level==0)return;
    for(int i=0;i<level;++i)std::cout<<"*";
    std::cout<<"\n";
    printTriangle(level-1);
};
void printTriangleReverse(int level)
{
    if(level==0)return;
    printTriangleReverse(level-1);
    for(int i=0;i<level;++i)std::cout<<"*";
    std::cout<<"\n";
};

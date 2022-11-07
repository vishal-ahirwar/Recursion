#include <iostream>
#include <cassert>

#define __ printf("\n");
void rightMax(uint16_t *arr, unsigned short len)
{
    if (len == 1)
        return;
    rightMax(arr + 1, len - 1);
    arr[0] = std::max(arr[0], arr[1]);
};
void leftMax(uint16_t *arr, unsigned short len)
{
    if (len == 1)
        return;
    leftMax(arr + 1, len - 1);
    arr[0] = std::min(arr[0], arr[1]);
};

void print(uint16_t *arr, unsigned short len)
{
    if (len == 0)
        return;
    print(arr, len - 1);
    std::cout << arr[len - 1] << " ";
};

uint16_t suffixSum(uint16_t *arr, unsigned short len, unsigned short count)
{
    assert(count <= len);
    if (count == 0)
        return 0;
    return arr[len - 1] + suffixSum(arr, len - 1, count - 1);
};

uint16_t prefixSum(uint16_t *arr, unsigned short len, unsigned short count)
{
    assert(count <= len);
    if (count == 0)
        return 0;
    return prefixSum(arr, len - 1, count - 1) + arr[count - 1];
}

bool isPalindrome(uint16_t*arr,unsigned short start,unsigned short end)
{
    if(start>=end-1)return true;
    if(arr[start]!=arr[end-1])return false;
    return isPalindrome(arr,start+1,end-1);
};

int main()
{
    uint16_t arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 0, 1};
    print(arr, sizeof(arr) / sizeof(arr[0]));
    __
        rightMax(arr, sizeof(arr) / sizeof(arr[0]));

    print(arr, sizeof(arr) / sizeof(arr[0]));
    __
        leftMax(arr, sizeof(arr) / sizeof(arr[0]));

    print(arr, sizeof(arr) / sizeof(arr[0]));
    __
        uint16_t narr[] = {2, 4, 6, 8, 10};
    std::cout << "suffix sum of 3 : " << suffixSum(narr, sizeof(narr) / sizeof(narr[0]), 3) << "\n";
    __
            std::cout
        << "prefix sum of 3 : " << prefixSum(narr, sizeof(narr) / sizeof(narr[0]), 3) << "\n";

    std::cout<<std::boolalpha<<"Is Palindrome narr : "<<isPalindrome(narr,0,sizeof(narr)/sizeof(narr[0]));
    __

    return 0;
}
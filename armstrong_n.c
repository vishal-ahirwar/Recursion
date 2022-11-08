#include <stdio.h>
#include <stdlib.h>
int isArmstrong_n(int n)
{
    if (n == 0)
        return 0;
    int r = n % 10;
    return isArmstrong_n(n / 10) + (r * r * r);
}
int main()
{
    int input;
    puts("input : ");
    scanf("%d", &input);
    printf("isArmStrong  :%s \n", isArmstrong_n(input)==input? "true" : "false");
    return 0;
}
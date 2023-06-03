//Tail Recursion Example
#include<iostream>


void function(int n)
{
	if (n==0)
	{
		return;
	};
	printf("[%d] . hello\n", n);
	function(n - 1);//last statement
};

int main()
{
	printf("%s\n", __FILE__);
	function(5);


	return 0;
}
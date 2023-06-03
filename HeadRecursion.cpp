//Head Recursion
#include<iostream>

void function(int n)
{
	if (n == 0)
	{
		return;
	};
	function(n - 1);
	printf("[%d] . hello\n",n);

};

int main()
{
	function(5);
	return 0;
}
//Tree Recursion
#include<iostream>

int total_calls{ 0 };

void function(int n)
{
	++total_calls;
	if (n == 0)
	{
		return;
	};
	function(n - 1);
	function(n - 1);
	//do something..
};

int main()
{
	function(3);
	std::cout << "total calls if input==3 : " << total_calls << "\n";
	return 0;
}
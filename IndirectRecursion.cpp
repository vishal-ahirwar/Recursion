#include<iostream>
int total_calls{};

void function_a(int n)
{

};

void function_b(int n)
{

};

int main()
{
	function(3);
	std::cout << "total calls if input==3 : " << total_calls << "\n";
	return 0;
}
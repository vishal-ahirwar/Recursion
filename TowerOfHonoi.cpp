#include<iostream>

namespace tower_of_honoi
{
	void execute(int n, const int& a, const int& b, const int& c);
};

int main()
{
	tower_of_honoi::execute(4, 1, 2, 3);
	return 0;
};
void tower_of_honoi::execute(int n, const int& a, const int& b, const int& c)
{
	if (n > 0)
	{
		execute(n - 1, a, c, b);
		printf("[%d --> %d]\n", a, c);
		execute(n - 1, c, b, a);
	};
};

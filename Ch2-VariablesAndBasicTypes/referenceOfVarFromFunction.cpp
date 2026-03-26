#include <iostream>

int& retInt()
{
	int a = 5;
	
	return a;
}

int main(void)
{
	int& i = retInt();

	int x = 100;
	
	const long long int size = 999999;
	int ai[size];
	
	for (long long int i = 0; i < size; i++)
	{
		ai[i] = 3000;
	}
	
	std::cout << i << std::endl;
	
	return 0;
}
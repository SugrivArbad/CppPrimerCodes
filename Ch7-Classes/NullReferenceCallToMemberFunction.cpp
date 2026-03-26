#include <cstdio>
#include <iostream>

class A
{
public :
	int a;
	
	A() : a(5) {}
	void f1(int i)
	{
		std::cout << " f1 : i = " << i << std::endl;
	}
	
	void f2()
	{
		printf(" f2 : a = %d\n", a);
		//std::cout << " f2 : a = " << a << std::endl;
	}
};

int main(void)
{
	A* pobjA = nullptr;
	
	pobjA->f1(6);
	pobjA->f2();
	
	return 0;
}

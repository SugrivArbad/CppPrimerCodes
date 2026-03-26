#include <stdio.h>

int e1 = 5;
extern void modify_extern();

int main(void)
{
	printf(" main : e1 = %d\n", e1);

	modify_extern();

	printf(" after modify_extern : e1 = %d\n", e1);

	return 0;
}


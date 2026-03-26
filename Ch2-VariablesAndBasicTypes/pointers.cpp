#include <stdio.h>

int main(void)
{
	const int v = 2;
	int *pv = &v;
	*pv = 5;

	printf(" v = %d, *pv = %d\n", v, *pv);

	return 0;
}


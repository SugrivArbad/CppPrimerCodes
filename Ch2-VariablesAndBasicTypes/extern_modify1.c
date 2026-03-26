int e1 = 5;

int main(void)
{
	printf(" main : e1 = %d\n", e1);

	modify_extern();

	printf(" after modify_extern : e1 = %d\n", e1);

	return 0;
}


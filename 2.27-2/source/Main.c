#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, x;
	for (i = 1; i <= 5; i++)
	{
		for (x = 10; x >= i; x--)
		{
			printf(" ");
		}

		for (j = 1; j <= i * 2 - 1; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	system("PAUSE");
	return 0;
}
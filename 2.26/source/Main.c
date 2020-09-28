#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b;

	printf("块材计:");
	scanf_s("%d", &a);
	printf("块材计:");
	scanf_s("%d", &b);

	if(a%b==0)
	{
		printf("材计琌材计计");
	}
	else
	{
		printf("材计ぃ琌材计计");
	}

	system("PAUSE");
	return 0;
}
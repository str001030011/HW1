#include <stdio.h>

int main(void) 
{
	int a,b,c;
	
	printf("請輸入第一個數 ");
	scanf_s("%d", &a);
	printf("請輸入第二個數 ");
	scanf_s("%d", &b);
	printf("請輸入第三個數 ");
	scanf_s("%d", &c);

	if (a > b)
	{
		if (a > c)
		{
			if(b > c)
			{
				printf("%d is the largest interger\n", a);
				printf("%d is the smallest interger\n", c);

			}
			else
			{
				printf("%d is the largest interger\n", a);
				printf("%d is the smallest interger\n", b);
			}
		}
		else 
		{
			printf("%d is the largest interger\n", c);
			printf("%d is the smallest interger\n", b);
		}
	}
	else if (b > c)
	{
		if (a > c)
		{
			printf("%d is the largest interger\n", b);
			printf("%d is the smallest interger\n", c);
		}
		else
		{
			printf("%d is the largest interger\n", b);
			printf("%d is the smallest interger\n", a);
		}
	}
	else 
	{
		printf("%d is the largest interger\n", c);
		printf("%d is the smallest interger\n", a);
	}
	
	system("PAUSE");
	return 0;
}
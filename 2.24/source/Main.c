#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,b;

	printf("�п�J�@�ӼƦr:");
	scanf_s("%d", &a);
	b = a % 2;
	if (b ==0)
	{
		printf("%d is a even number", a);
	}
	else if(b==1)
	{
		printf("%d is a odd number", a);
	}
	system("PAUSE");
	return 0;
}
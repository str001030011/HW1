#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float i, j, k;

	printf("�п�J�p���魫(����)=");
	scanf_s("%f", &i);
	printf("�п�J�p������(����)=");
	scanf_s("%f", &j);
	k = i / (j*j);
	printf("�p��BMI��%2.2f\n", k);
	
	if (k <= 24&&k>=18.5)
	{
		printf("���ߧA(�p)BMI�A��(Nomal)��!!");
	}
	else if (k >= 24.9&&k<=29.9)
	{
		printf("�z!!�A(�p)��BMI�L��(Over Weight)��!!");
	}
	else if (k>29.9)
	{
		printf("�z!!�A(�p)��BMI�W��(Obese)��!!");
	}
	else if (k <= 18.5)
	{
		printf("�p�߳�!!�A(�p)�w�g�L��(Under Weight)�F!!");
	}


	system("PAUSE");
	return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b;

	printf("��J�Ĥ@�Ӽ�:");
	scanf_s("%d", &a);
	printf("��J�ĤG�Ӽ�:");
	scanf_s("%d", &b);

	if(a%b==0)
	{
		printf("�Ĥ@�ӼƬO�ĤG�Ӽƪ�����");
	}
	else
	{
		printf("�Ĥ@�ӼƤ��O�ĤG�Ӽƪ�����");
	}

	system("PAUSE");
	return 0;
}
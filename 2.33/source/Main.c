#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a,b,c, d, e, f ;

	printf("a �p�@��Ѫ��`���{��=");
	scanf_s("%f", &a);
	printf("b �T�o�@���ɦh�ֿ�=");
	scanf_s("%f", &b);
	printf("c �����@���ɯ��p�h�֤���=");
	scanf_s("%f", &c);
	printf("d �@�Ѫ������O=");
	scanf_s("%f", &d);
	printf("d �@�Ѫ��q��O(�L���O)=");
	scanf_s("%f", &e);

	f = (a / c)*b + d + e;
	printf("�A�@��Ѫ���O�O%5.2f��",f);

	system("PAUSE");
	return 0;

}
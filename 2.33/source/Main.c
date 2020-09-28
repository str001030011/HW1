#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a,b,c, d, e, f ;

	printf("a 妳一整天的總里程數=");
	scanf_s("%f", &a);
	printf("b 汽油一公升多少錢=");
	scanf_s("%f", &b);
	printf("c 平均一公升能行駛多少公里=");
	scanf_s("%f", &c);
	printf("d 一天的停車費=");
	scanf_s("%f", &d);
	printf("d 一天的通行費(過路費)=");
	scanf_s("%f", &e);

	f = (a / c)*b + d + e;
	printf("你一整天的花費是%5.2f元",f);

	system("PAUSE");
	return 0;

}
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float i, j, k;

	printf("請輸入妳的體重(公斤)=");
	scanf_s("%f", &i);
	printf("請輸入妳的身高(公尺)=");
	scanf_s("%f", &j);
	k = i / (j*j);
	printf("妳的BMI為%2.2f\n", k);
	
	if (k <= 24&&k>=18.5)
	{
		printf("恭喜你(妳)BMI適中(Nomal)喔!!");
	}
	else if (k >= 24.9&&k<=29.9)
	{
		printf("哇!!你(妳)的BMI過重(Over Weight)喔!!");
	}
	else if (k>29.9)
	{
		printf("哇!!你(妳)的BMI超重(Obese)喔!!");
	}
	else if (k <= 18.5)
	{
		printf("小心喔!!你(妳)已經過輕(Under Weight)了!!");
	}


	system("PAUSE");
	return 0;
}
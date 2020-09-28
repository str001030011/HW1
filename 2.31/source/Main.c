#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, k;
	printf("number  squqre  cube\n");

	for (i = 1; i < 11; i++)
	{   
		j = i * i;
		k = i * i*i;
		printf("%-8d%-8d%-8d\n",i,j,k);
	}
	
	system("PAUSE");
	return 0;
}
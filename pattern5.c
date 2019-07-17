#include<stdio.h>
int main()
{
	int i,j,k,range;
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		for(j=1;j<=range-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}

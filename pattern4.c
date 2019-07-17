#include<stdio.h>
int main()
{
	int i,j,range,n;
	scanf("%d",&range);
	
	for(i=0;i<range;i++)
	{
		for(j=range-i;j<=range;j++)
		{
			printf("%d",j);
		}
		
		printf("\n");
	}
}

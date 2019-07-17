#include<stdio.h>
int main()
{
	int i,j,row;
	scanf("%d",&row);
	for(i=0;i<row;i++)
	{
		for(j=row-i;j<=row;j++)
		{
			printf("%d",j);
		}
	printf("\n");
	}
	return 0;
}

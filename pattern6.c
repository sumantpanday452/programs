#include<stdio.h>
int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=n;k++)
		{
			if(i==1 || i==n)
			printf("*");
			else
			{
				if(k == 1 || k == n)
				printf("*");
				else
				printf(" ");
			}
				
			
			printf("");
			
		}
		printf("\n");
	}
}

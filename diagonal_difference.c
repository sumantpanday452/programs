#include<stdio.h>
int main()
{
	int i,j;
	int n;
	int a[5][5];
	int sum1=0;
	int sum2=0;
	int sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);	
		}	
	}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i == j)
					sum1+=a[i][j];	
			}
			sum2+=a[i][n-1-i];	
		}
	sum=abs(sum1-sum2);
	printf("%d",sum)
	
return 0;
}

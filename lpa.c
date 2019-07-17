#include<stdio.h>
int main()
{
	int i,j,sum=0;
	int min;
	int a[6];
	int rank;
	int count= 0;
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	
	
	for(i=0;i<6;i++)
	{
		if(min < a[i])
			min=a[i];
	}
	
	printf("min = %d\n",min);
	
	for(i=0;i<6;i++)
	{
		if( min == a[i])
		{
		count++;
		sum+=count;
		}
	}
	rank=sum/count;
	printf("count is %d\n",count);
	printf("rank is %d\n",rank);
	for(i=0;i<6;i++)
	{
		if(min == a[i])
			a[i]=rank;
	}
	for(i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}
}

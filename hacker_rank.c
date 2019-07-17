#include<stdio.h>
int main()
{
	int a[3];
	int b[3];
	int i,j;
	int num;
	int count1=0;
	int count2=0;
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=num;i++)
	{
		if(a[i]>b[i])
			count1++;
		else
			count2++;
	}
	printf("%d %d",count1,count2);
	
}

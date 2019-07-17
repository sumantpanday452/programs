#include<stdio.h>
int main()
{
	int i;
	int a[20];
	int num;
	int max=0;
	int min=0;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<num;i++)
	{
		if(max<a[i])
			max=a[i];	
	}
	for(i=0;i<num;i++)
	{
		if(min>a[i])
			min=a[i];	
	}
	printf(" maximum number is %d",max);
	printf(" minimun number is %d",min);
}

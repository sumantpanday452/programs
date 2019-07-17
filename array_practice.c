#include<stdio.h>
int main()
{
	int a[10];
	int i,num;
	int sum1=0;
	int sum2=0;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		if(a[i] > 0)
			sum1+=a[i];
		else
		sum2+=abs(a[i]);
	}
	printf("sum of postive number=%d",sum1);
	printf("\nsum of negtive number=%d",sum2);
}

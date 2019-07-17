#include<stdio.h>
#include<math.h>
int main()
{
	int a[10];
	int sum=0;
	int avg=0;
	int i,num;
	int count=0;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		sum+=a[i];
		count++;
	}
	avg=sum/count;
	printf("%d is avg",avg);
	return 0;
}

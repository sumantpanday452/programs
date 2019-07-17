#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=100;i<=200;i++)
	{
		if(i%8 == 0)
		{
			sum+=i;
			printf(" %d\t",i);
		}
	}
	printf("sum is %d",sum);
	
}

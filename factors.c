#include<stdio.h>
int main()
{
	int i,num;
	int count=0;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i == 0)
		{
			printf("%d\t",i);
			count++;
		}
	}
	printf("\n%d are factors",count);
	return 0;
}

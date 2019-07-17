#include<stdio.h>
int main()
{
	int i,num;
	int sum=0;
	scanf("%d",&num);
	i=1;
	while(i <= num)
	{
		if(i%2 != 0)
		{
			printf("%d\t",i);
		}
		i=i+1;
	}
	
}

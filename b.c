#include<stdio.h>
int main()
{
	int i,num;
	int sum=0;
	scanf("%d",&num);
	i=1;
	while(i <= num)
	{
		if(i%2 == 0)
		{
			sum+=i;
		
		}
		i=i+1;
	}
		printf("%d is sum of even natural number",sum);
	
}

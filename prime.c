#include<stdio.h>
int main()
{
	int temp=0;
	int num,i;
	scanf("%d",&num);
	for(i=2;i<=num/2;i++)
	{
		if(num%i == 0)
		{
			temp++;
		}
	}
	if(temp != 0)
		printf("%d is  not prime no.",num);
	else
		printf("%d is prime no.",num);
}

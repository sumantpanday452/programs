#include<stdio.h>
int main()
{
	int rem,num;
	int sum=0;
	printf("enter numer");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem;
	}
	prinf("%d",sum);
	return 0;
}

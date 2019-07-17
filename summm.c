#include<stdio.h>
void main()
{
	int rem,num,sum2;
	int sum1=0;
	printf("enter numer");
	scanf("%d",&num);
	while(num != 0)
	{
		rem=num%10;
		num=num/10;
		sum1=sum1+rem;
		sum2=sum2+sum1;
	}
	printf("%d",sum2);
	getch();
}

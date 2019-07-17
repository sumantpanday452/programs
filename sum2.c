#include<stdio.h>
void main()
{
	long int rem,num,rem1,rem2;
	long int sum=0;
	long int sum1=0;
	long int sum2=0;
	printf("enter numer");
	scanf("%d",&num);
	while(num != 0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem;
	}
	while (sum != 0)
	{
		rem1=sum%10;
		sum1=sum1+rem1;
		sum=sum/10;
	}
		while (sum1 != 0)
	{
		rem2=sum1%10;
		sum2=sum2+rem2;
		sum1=sum1/10;
	}
	printf("%ld3",sum2);
	getch();
}

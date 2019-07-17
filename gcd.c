#include<stdio.h>
int main()
{
	int rem=1;
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	if(num1 > num2)
	{
		while(rem != 0)
		{
			rem= num1%num2;
			if(rem == 0)
			{
				printf("%d is gcd",num2);
			}
			else
			{
				num1=num2;
				num2=rem;
			}
		}
	}
}

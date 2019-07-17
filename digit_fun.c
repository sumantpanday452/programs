#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	printf(" sum of digit %d",dig(num));
}
int dig( int n)
{
	int rem;
	int sum=0;
	while(n > 0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	return (sum);
}

#include<stdio.h>

int main()
{
	int n,n1,rem;
	int fact=1;
	int sum=0;
	scanf("%d",&n);
	n1=n;
	while(n!=0)
	{
		rem=n%10;
		while(rem>0 )
		{
			fact=fact*rem;
			rem--;
		
		}
			printf("fact=%d\n",fact);
		sum+=fact;
		n=n/10;
		fact=1;
	}
	if(n1 == sum)
		printf("\n%d is strong number",n1);
	else
		printf("%d is not strong number",n1);
}

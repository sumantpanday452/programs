#include<stdio.h>
int main()
{
	int n1,n2,rem,new;
	scanf("%d%d",&n1,&n2);
	new=n1*n2;
	rem=n1%n2;
	while(rem!= 0)
	{
		n1=n2;
		n2=rem;
		rem=n1%n2;
	}
	printf("%d is gcd/n",n2);
	printf("%d is gcd",new/n2);	
}

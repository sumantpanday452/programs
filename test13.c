#include<stdio.h>
int main()
{
	int i, num;
	int temp=0;
	scanf("%d",&num);
	for(i=2;i<= num/2;i++)
	{
		if(num%i == 0)
			temp=1;
	}
	if(temp == 0)
		printf("%d is a prime number",num);
	else
		printf("%d is not a prime number",num);
}

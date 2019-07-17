#include<stdio.h>
int main()
{
	int num,num1,i;
	int sum=0;
	scanf("%d",&num);
	num1=num;
	for(i=1;i<num;i++)
	{
		if(num%i == 0)
		{
			sum+=i;
		}
	}
	if(num1 == sum)
		printf("%d is perfect number",num1);
	else
		printf("%d is not perfect number",num1);
}


#include<stdio.h>
int main()
{
	int rem,num,num1;
	int rev=0;
	scanf("%d",&num);
	num1=num;
	while(num != 0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	if(num1 == rev)
		printf("%d is palindrom number",num1);
	else
		printf("%d is not palindrom number",num1);
return 0;		
}

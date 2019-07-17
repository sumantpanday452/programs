#include<stdio.h>
#include<math.h>
int main()
{
	int num,r,temp,n1;
	int arm=0;
	int count=0;
	scanf("%d",&num);
	n1=num;
	temp=num;
	while(num != 0)
	{
		num=num/10;
		count++;
	}
	while(n1 !=0)
	{
		r=n1%10;
		arm+=pow(r,count);
		n1=n1/10;
	}
	if(temp == arm)
		printf("armstrong number");
	else
		printf("not armstrong number");
}

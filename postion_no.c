#include<stdio.h>
int main()
{
	int i,j,num,ch;
	int count=0;
	scanf("%d",&num);
	printf("enter your choice number\n");
	scanf("%d",&ch);
	for(i=2;i<=num;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j == 0)
			{
				printf("%d\t",i);
				count++;
			if(i == ch)
				printf("postion of number is %d\n",count);
			
			}
			
		}
	}
}

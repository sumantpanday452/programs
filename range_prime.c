#include<stdio.h>
int main()
{
	int i,j,num;
	int count=0;
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j == 0)
				count++;
		}
		if( count == 1)
		printf("%d\n",i);
		count=0;
	}
return 0;
}

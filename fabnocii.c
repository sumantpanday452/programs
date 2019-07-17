#include<stdio.h>
int main()
{
	int n1,n2,num;
	int sum=0;
	scanf("%d%d%d",&n1,&n2,&num);
	printf("%d\t",n1);
	printf("%d\t",n1);
	while(sum <= num)
	{
		sum=n1+n2;
		printf("%d\t",n1);
		n1=n2;
		n2=sum;
	}
	
	
}

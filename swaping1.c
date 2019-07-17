#include<stdio.h>
int main()
{
	int a,b;
	int temp;
	printf("enter value for swaping\n");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("a=%d\nb=%d",a,b);
	return 0;
		
}

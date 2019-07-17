#include<stdio.h>
int sub(int , int);
 int main()
{
	int a,b;
	int c;
	scanf("%d%d",&a,&b);
	c=sub(a,b);
	printf("%d",c);
}
int sub(int a, int b)
{
	return (a-b);
}

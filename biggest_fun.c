#include<stdio.h>
int biggest(int , int, int);
 int main()
{
	int a,b,c;
	int d;
	scanf("%d%d%d",&a,&b,&c);
	d=biggest(a,b,c);
	printf("%d",d);
}
int biggest(int a, int b,int c)
{ 
int result;
result=a>b?(a>c?a:c):(b>c?b:c);
	return (result);
}

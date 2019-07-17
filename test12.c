#include<stdio.h>
int main()
{
	int a,b,c,result;
	scanf("%d%d%d",&a,&b,&c);
	result=a>b?(a>c?a:c):(b>c?b:c);
	printf("%d is biggest number",result);
}

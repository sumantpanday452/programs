#include<stdio.h>
int main()
{
int a,b,c;
printf("enter value a,b and c\n");
scanf("%d%d%d",&a,&b,&c);
if(a!=0 && b!=0 && c!=0)
{
	if(a+b+c == 180)
	{
		printf("it can form triangle\n");
		if(a==b && b==c && c==a)
		{
		printf("equilateral triangle\n");	
		}
 		else if(a==b || b==c || c==a)
		{
		printf("isocelus triangle\n");	
		}
		else
		{
 		printf("scalan triangle\n");	
		}
		
	}
}
else
printf("it can not form triangle\n");

	
}

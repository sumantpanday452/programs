#include<stdio.h>
#include<math.h>
int main()
{
	int a , b, c;
	int cond;
	scanf("%d%d%d",&a,&b,&c);
	cond=a>b?(a>c?a:c):(b>c?b:c);
	if( cond == a)
	{
		if(pow(a,2) == pow(b,2)+pow(c,2))
			printf("it satisfy pathagoras triplet");
		else
			printf("it will not satisfy pathagoras triplet condition");
	}
	
	else if( cond == b)
	{
		if(pow(b,2) == pow(a,2)+pow(c,2))
			printf("it satisfy pathagoras triplet");
		else
			printf("it will not satisfy pathagoras triplet condition");
	}
	
	else if( cond == c)
	{
		if(pow(c,2) == pow(a,2)+pow(b,2))
			printf("it satisfy pathagoras triplet condition");
		else
			printf("it will not satisfy pathagoras triplet condition");	
		
	}
	else
		printf("it will not satisfy pathagoras triplet condition");
	
}

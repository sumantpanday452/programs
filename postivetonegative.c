#include<stdio.h>
#include<math.h>
int main()
{
	int a, b,c;
	float cal1;
	printf("enter the value of a b and c\n");
	scanf("%d%d%d",&a,&b,&c);
	cal1=(sqrt(abs(pow(b,2)-4*a*c)));
	printf("%fi",cal1);
	return 0;
}

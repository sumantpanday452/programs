#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	double r1,r2;
	printf("enter value of a,b and c\n");
	scanf("%f%f%f",&a,&b,&c);
	d=pow(b,2)-(4*a*c);
	if(pow(b,2) > 4*a*c)
	{
	printf("root are equal")
	r1=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	r2=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	printf("%0.2f\t\t%0.2f",r1,r2);
	}
	return 0;
}

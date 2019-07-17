#include<stdio.h>
int main()
{
	int year;
	printf("enter year \n");
 	scanf("%d",&year);
 	if( year < 1918)
 		{
 		if(year%4 == 0)
 		{
 			printf("12 sept %d",year);
		}
			else 
		printf("13th sept %d",year);
		}
	 else if(year > 1918)
	 	if(year%4 == 0  &&  year%100 != 0  ||  year%400 == 0)
		{
			printf("12th sep %d",year);
		}
 		else
		{
			printf("13th sep %d",year);	
		}
	 else
				printf("26 sept %d",year);
	return 0;
}

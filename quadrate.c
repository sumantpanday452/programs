#include<stdio.h>
int main()
{
	int x,y;
	printf("enter value of x and y\n");
	scanf("%d%d",&x,&y);
	if(x>0 && y>0)
	
		printf("it's 1st quadrant\n");
	
	else if(x<0 && y>0)
	
		printf("it's 2nd quadrant\n");
	
	else if(x<0 && y<0)
	
		printf("it's 3rd quadrant\n");
	
	else if(x>0 && y<0)
	
		printf("it's 4th quadrant\n");
	else 
	
		printf("it's origin\n");
		
	return 0;
	
}

#include<stdio.h>
#inclde<conio.h>

void main()
{
int x;
printf("enter your number")
scanf("%d",&x);
if(x%4 ==0)
    {
    	if(x%400==0)
    	     printf("it is a leap year");
	}
	else 
	printf("it is not a leap year");
}
getch();
}

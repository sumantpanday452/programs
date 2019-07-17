#include<stdio.h>
int main()
{
	char choice;
	printf("enter your choice");
	scanf("%c",&choice);
	if(choice >= 'a' && choice <= 'z' || choice >= 'A' && choice <= 'Z')
	{
		printf("%c is an alphabet", choice);
	}
	else if(choice >= '0' && choice <= '9')
	{
		printf("%c is digit",choice);
	}
	else
	{
		printf("it is special character");
	}
}

#include<stdio.h>
int main()
{
     long int a[5];
    int i;
     long int sum=0;
    for(i=0;i<=5;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<=5;i++)
    {
       sum+=a[i];
    }
    printf("%ld",sum);
}

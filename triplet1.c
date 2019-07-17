#include<stdio.h>
int main()
{
    int count1=0;
    int count2=0;
    int a[3],b[3];
    int i,j;
    
    for(i=0;i<3;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(j=0;j<3;j++)
    {
        
        if(a[j]<b[j])
            count2++;
        else if(a[j]>b[j])
            count1++;  
    }
    printf("%d %d",count1,count2);
return 0;
}

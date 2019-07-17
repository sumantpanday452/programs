#include <stdio.h>
int main()
{
    int low, high, i, temp,count=0;
    int choice;
    scanf("%d %d", &low, &high);
    scanf("%d",&choice);
    while (low < high)
    {
        temp = 0;
        if( low==1)
            temp=1;
        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                temp = 1;
                break;
            }
        }
        if (temp == 0)
            printf("%d ", low);
        if(low <= choice && temp==0)
        	count++;
        ++low;
    }
    printf("\n postion %d",count);
    return 0;
}

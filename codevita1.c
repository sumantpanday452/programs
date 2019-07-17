#include<stdio.h>
#include<math.h>
int main()
{
	int hour,period;
	float chg;
	float time;
	float min;
	float lon;
	int angle;
	scanf("%d",&period);
	scanf("%f",&lon);
	time=(period/360.0)*lon;
	
	hour=(int)time;
		
	chg=time-hour;
	
	min=0.6*chg*100;
	angle=(11/2.0)*min-30*hour;
	if( angle == -360 || angle == 360 )
		printf("0");
	else
		printf("%d\n",angle);

	
}

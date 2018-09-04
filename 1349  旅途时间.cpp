#include<stdio.h>
int main()
{
    int time1,time2,a,b,c,d,f,hrs,mins;
	scanf ("%d%d",&time1,&time2);
	a=time1/100;
	b=time1-(a*100);
	a=a*60+b;
	c=time2/100;
	d=time2-(c*100);
	c=c*60+d;
	f=c-a;
	hrs=f/60;
	mins=f-(hrs*60);
	printf ("The train journey time is %d hrs %d mins.\n",hrs,mins);
	return 0;
}
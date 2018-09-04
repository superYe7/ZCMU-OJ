#include<stdio.h>
int main ()
{
    int time1,time2;
	scanf ("%d%d",&time1,&time2);
	int a,b,c,d,r;
	a=time1/100;
    b=time2/100;
	a=a*60+time1%100;
	b=b*60+time2%100;
	c=b-a;
	d=c/60;
	r=c-d*60;
	printf ("The train journey time is %d hrs %d mins.\n",d,r);
	return 0;
}
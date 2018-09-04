#include<stdio.h>
int main()
{
    int n,a,b,c,d,temp,r;
	scanf ("%d",&n);
	a=n/1000;
	b=(n-a*1000)/100;
	c=(n-a*1000-b*100)/10;
	d=n-a*1000-b*100-c*10;
	a=(a+9)%10;
	b=(b+9)%10;
	c=(c+9)%10;
	d=(d+9)%10;
	temp=a;a=c;c=temp;
	temp=b;b=d;d=temp;
	r=a*1000+b*100+c*10+d;
	printf ("The encrypted number is %d\n",r);
	return 0;

}
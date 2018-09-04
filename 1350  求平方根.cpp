#include<stdio.h>
#include<math.h>
int main()
{
    double a,x;
	while (~scanf ("%lf",&x)){
	    a=sqrt(x);	
		printf ("The square of %.1f is %.1f\n",x,a);
	}
	return 0;
}
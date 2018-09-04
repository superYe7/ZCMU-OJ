#include<stdio.h>
#include<math.h>
int main()
{
    int repeat;
	scanf ("%d",&repeat);
	while (repeat--){
	    int i=1;
		double sum=0.0,n=1.00,eps,f=1.00;
		scanf ("%lf",&eps);
		while (fabs(n)>eps){
		    sum+=n;
			f=-f;
			i+=2;
			n=f/i;
		}
		printf ("%.6f\n",sum);
	}
	return 0;
}
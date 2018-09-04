#include<stdio.h>
int main ()
{
    int n;
	while (scanf ("%d",&n)!=EOF){
	    if (n==0) break;
		double sum=0.000;
		int i,j,f;
		for (i=1;i<=n;i++){
			f=0;
			for (j=1;j<=i;j++){
			    f+=j;
			}
			sum+=1.000/f;
		}
		double a;
		a=sum*100000;
		a+=0.5;
		sum=a/100000;
		printf ("%.3f\n",sum);
	}
	return 0;
}
#include<stdio.h>
int main()
{
    int T;
	scanf ("%d",&T);
	while (T--){
	    int n,f=1,i;
		scanf ("%d",&n);
		double sum=0.0;
		for (i=1;i<=n;i++){
		   sum+=f*(1.00/i);
		   f=-f;
		}
		printf ("%.3f\n",sum);
	}
	return 0;
}
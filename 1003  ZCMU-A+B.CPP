#include<stdio.h>
int main ()
{
    int T;
	scanf ("%d",&T);
	while (T--){
	    int n,i,a,sum=0;
		scanf ("%d",&n);
		for (i=0;i<n;i++){
			scanf ("%d",&a);
			sum+=a;
		}
	printf ("%d\n",sum);
	}
return 0;
}
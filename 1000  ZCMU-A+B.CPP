#include<stdio.h>
int main()
{
    int n,a,sum;
	while(~scanf ("%d",&n))
	{
		if (n==0) break;
		sum=0;
		while (n--){
	       scanf ("%d",&a);
		   sum+=a;
		}
	    printf ("%d\n",sum);
	}
return 0;
}
#include<stdio.h>
int main()
{
    int a,n;
	while (~scanf ("%d%d",&a,&n)){
	     long long x=0,sum=0;
		 int i;
         for (i=1;i<=n;i++){
		     x=x*10+a;
			 sum+=x;
		 }
		 printf ("%lld\n",sum);
	}
	return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    int T;
	scanf ("%d",&T);
	while (T--){
	    int a,b,sum=0,x;
		scanf ("%d%d",&a,&b);
		sum=a+b;
		if (sum<100)
			printf ("%d\n",sum);
		else if (sum>=100)
		{
		    x=sum%100;
			printf ("%d\n",x);
		}
	}
	return 0;
}
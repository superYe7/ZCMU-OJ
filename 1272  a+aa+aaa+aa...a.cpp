#include<stdio.h>
int main()
{
    int repeat;
	scanf ("%d",&repeat);
	while (repeat--){
	    int a,n,sum=0,i,x=0;
		scanf ("%d%d",&a,&n);
        for (i=0;i<n;i++){
		    x=x*10+a;
			sum+=x;
		}
		printf ("%d\n",sum);
	}
	return 0;
}
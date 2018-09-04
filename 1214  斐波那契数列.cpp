#include<stdio.h>
int main ()
{
    int n,a[20],i;
	a[0]=1;a[1]=1;
    while (scanf ("%d",&n)!=EOF){
		for (i=2;i<=n;i++){
		    a[i]=a[i-1]+a[i-2];
		}
	printf ("%d\n",a[n]);
	}
return 0;
}
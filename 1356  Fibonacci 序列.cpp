#include<stdio.h>
int f (int n);
int main ()
{
    int T;
	scanf ("%d",&T);
	while (T--){
	    int n,m,a=0,i;
		scanf ("%d%d",&m,&n);
		for (i=1;i<20;i++){
		    if (f(i)>=m&&f(i)<=n)
			{
			     if (a==0) printf ("%d",f(i));
				 else printf (" %d",f(i));
				 a=1;
			}	
		}
		printf ("\n");
	}
	return 0;
}
int f (int n)
{
    if (n<=1) return n;
	else return (f(n-1)+f(n-2));
}
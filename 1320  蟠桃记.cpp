#include<stdio.h>
int dg(int n);
int main()
{
    int n;
	while (~scanf ("%d",&n)){
	    int x;
		x=dg(n);
		printf ("%d\n",x);
	}
	return 0;
}
int dg(int n)
{
    if (n==1)
		return 1;
	else
		return dg(n-1)*2+1+1;
}

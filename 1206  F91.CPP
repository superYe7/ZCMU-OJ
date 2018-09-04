#include<stdio.h>
int main()
{
    int n;
	while (~scanf ("%d",&n)){
	    long f;
		if (n>100) f=n-10;
		else if (n<=100&&n>=0) f=91;
		printf ("f91(%d) = %d\n",n,f);
	}
	return 0;
}
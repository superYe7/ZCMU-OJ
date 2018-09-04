#include<stdio.h>
int main()
{
    int n;
	while (~scanf ("%d",&n)){
	    if (n==-1) break;
		if (n>100) printf ("We have HAMBERGS\n");
		if (n==100) printf ("Hamburg time\n");
		if (n<100) printf ("NO\n");
	}
	return 0;
}
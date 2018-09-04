#include<stdio.h>
int main()
{
    int n;
	while (~scanf ("%d",&n)){
	    int i,m=1,sum;
		if (n==0)
			printf ("1");
		else 
		{
			printf ("5");
			for (i=0;i<n-1;i++){
			    printf ("0");
			}
			printf ("5");
			for (i=0;i<n-1;i++)
				printf ("0");
		}
		printf ("\n");
	}
	return 0;
}
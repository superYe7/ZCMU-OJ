#include<stdio.h>
int main()
{
    int T;
	scanf ("%d",&T);
	while (T--){
	    int n;
		scanf ("%d",&n);
		if (n<10)  printf ("%d\n",n);
		else if (n>=10&&n<189)
		{
		    int a;
			a=n-9;
			if (a%2!=0) printf ("-1\n");
			else if (a%2==0)
			{
			   n=(a/2)+9;
			   printf ("%d\n",n);
			}
		}
		else if (n>=189&&n<=1000)
		{
		    int i;
			i=n-189;
			if (i%3!=0)  printf ("-1\n");
			else if (i%3==0)
			{
			   n=(i/3)+99;
			   printf ("%d\n",n);
			}
		} 
	
	}
	return 0;
}
#include<stdio.h>
int main()
{
    int n;
	scanf ("%d",&n);
	while (n--){
	    int a,b,sum;
		scanf ("%d%d",&a,&b);
		sum=a+b;
		printf ("%d\n",sum);
	}
	return 0;
}
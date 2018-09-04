#include<stdio.h>
int main()
{
    int sum,a,b;
	while (~scanf ("%d%d",&a,&b)){
	    if (a==0&&b==0) break;
		sum=a+b;
		printf ("%d\n",sum);
	}
	return 0;
}
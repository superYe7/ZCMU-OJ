#include<stdio.h>
int main ()
{
    int P,M,V,p,m,v;
	while (scanf ("%d%d%d\n%d%d%d",&P,&M,&V,&p,&m,&v)!=EOF){
	     int a,b,c,result=0;
		 a=P/p;
		 b=M/m;
		 c=V/v;
		 if (a<=b&&a<=c) result=a;
		 else if (b<=a&&b<=c)  result=b;
		 else if (c<=a&&c<=b)  result=c;
		 printf ("%d\n",result);
	}
	return 0;
}

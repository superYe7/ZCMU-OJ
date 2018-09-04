#include<stdio.h>
#include<string.h>
int main()
{
    int t;
	scanf ("%d",&t);
	while (t--){
	   int i,j,a,b;
       int sum1=0,sum2=0;
	   scanf ("%d%d",&a,&b);
	   for (i=1;i<a;i++)
	   {
	       if (a%i==0)
			   sum1+=i;
	   }
	   for (j=1;j<b;j++)
	   {
	       if (b%j==0)
			   sum2+=j;
	   }
	   /*printf ("%d %d",sum1,sum2);*/
	   if (sum1==b&&sum2==a)
		   printf ("YES\n");
	   else 
		   printf ("NO\n");
	}
	return 0;
}
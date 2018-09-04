#include<stdio.h>
#include<math.h>
int main()
{
   int n;
   while (~scanf ("%d",&n)){
       int flag;
	   if (n==1) printf ("N\n");
	   if (n==2) printf ("Y\n");
	   if (n==3) printf ("Y\n");
	   int i;
	   for (i=2;i<=sqrt(n);i++){
		   if (n%i==0) {flag=0;break;}
		   if (n%i!=0) flag=1;;
	   }
	   if (flag==0) printf ("N\n");
	   if (flag==1) printf ("Y\n");
   }
   return 0;
}
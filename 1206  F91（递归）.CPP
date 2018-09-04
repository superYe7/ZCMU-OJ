#include<stdio.h>
int dg(int n)
{
   if (n>100)
	   return n-10;
   else 
	   return dg(dg(n+11));
}
int main()
{
   int n;
   while (~scanf ("%d",&n)){
      printf ("f91(%d) = %d\n",n,dg(n));
   }
return 0;
}
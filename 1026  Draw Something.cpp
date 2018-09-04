#include<stdio.h>
int main()
{
   int n;
   while (~scanf ("%d",&n)){
      if (n==0) break;
	  else 
	  {
	     int i,a,s,sum=0;
		 for (i=0;i<n;i++){
		     scanf ("%d",&a);
			 s=a*a;
			 sum+=s;
		 }
		 printf ("%d\n",sum);
	  }
   }
   return 0;
}
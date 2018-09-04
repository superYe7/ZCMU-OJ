#include<stdio.h>
int main()
{
     int m,n;
	 while (~scanf ("%d%d",&m,&n)){
	     int i;
		 int ph=0,lh=0;
         for (i=m;i<=n;i++)
		 {
		     if (i%2==0)
			     ph+=i*i;
			 else
				 lh+=i*i*i;
		 }
		 printf ("%d %d\n",ph,lh);
	 }
	 return 0;
}
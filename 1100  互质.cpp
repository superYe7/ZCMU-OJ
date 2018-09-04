#include<stdio.h>
int main ()
{
     int n;
	 while (scanf ("%d",&n)!=EOF){
	     int i,count=0,c,temp,a,b;
		 for (i=1;i<=n;i++){
		     a=i;b=n;
			 while (b!=0)
			 {
				 c=a%b;
			     a=b;
			     b=c;
			 }
			 if (a==1)
				 count++;
		 }
		 printf ("%d\n",count);
	 }
	 return 0;
}
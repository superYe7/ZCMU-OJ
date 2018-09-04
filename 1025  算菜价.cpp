#include<stdio.h>
int main ()
{
    int T;
	scanf ("%d",&T);
	while (T--){
	    int n;
		scanf ("%d",&n);	
		int i;double s,d,z,sum=0.0;
		for (i=0;i<n;i++)
        {
			 scanf ("%lf%lf",&s,&d);
			 z=s*d;
		     z*=10;z+=0.5;z=(int)z;z=z/10;
			 sum+=z;
         }
		 
		 printf ("%.1f\n",sum);
	}
return 0;
}
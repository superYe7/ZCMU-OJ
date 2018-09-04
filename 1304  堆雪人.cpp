#include<stdio.h>
int main()
{
    int n,m;
	while (~scanf ("%d%d",&n,&m)){
	     int i,j,flag=0;
		 double a[100],b[100];
		 for (i=0;i<n;i++)
			 scanf ("%lf",&a[i]);
		 for (j=0;j<m;j++)
			 scanf ("%lf",&b[j]);
		 for (i=0;i<n;i++)
		 {
		     double x,y,z,v;
			 for (j=0;j<m;j++)
			 {
				 x=a[i]*1.5;
				 y=a[i]*2;
				 z=b[j]*1.5;
				 v=b[j]*2;
				 if ((x<=b[j]&&b[j]<=y)||(z<=a[i]&&a[i]<=v))
				 {
					 printf ("Yes\n");
					 flag=1;
					 break;
				 }
			 }
			 if (flag==1) break;
		 }
		 if (flag==0)  printf ("No\n");
	}
	return 0;
}
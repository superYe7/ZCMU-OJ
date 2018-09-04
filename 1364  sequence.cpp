#include<stdio.h>
#include<string.h>
int main()
{
    int n,m;
	while (~scanf ("%d%d",&n,&m)){
	     if (n==0&&m==0)  break;
		 int i,str[100],temp;
		 for (i=0;i<n;i++)
			 scanf ("%d",&str[i]);
		 for (i=0;i<n;i++)
		 {
		     if (str[i]>m)
			 {
			     temp=str[i];
				 str[i]=m;
				 m=temp;
			 }
		 }
		 str[n]=m;
		 for (i=0;i<=n;i++)
		 {
			 if (i<n) printf ("%d ",str[i]);
			 if (i==n) printf ("%d\n",str[i]);
		 }
	}
return 0;
}
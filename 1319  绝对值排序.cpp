#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;
int cmp(int a,int b)
{
    return a>b;
}
int main()
{
     int n;
	 while (~scanf ("%d",&n)){
	     if (n==0) break;
		 int i,j,a[101],b[101];
		 for (i=0;i<n;i++)
		 {
			 scanf ("%d",&a[i]);
			 b[i]=a[i];
		 }
		 for (i=0;i<n;i++)
		 {
		      for (j=0;j<n;j++)
			  {
			      if (a[j]<0)
					  a[j]=-a[j];
			  }
			  sort(a,a+n,cmp);
			  for (i=0;i<n;i++)
			  {
			      for (j=0;j<n;j++)
				  {
				      if (-a[i]==b[j])
					     a[i]=b[j];
				  }
				  printf ("%d%c",a[i],i==n-1?'\n':' ');
			  }
		 }

	 }
	 return 0;
}
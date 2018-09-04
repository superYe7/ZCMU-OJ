#include<stdio.h>
#include<string.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
     int n;
	 while (~scanf ("%d",&n)){
	     int i,str[100];
		 double ave=0.0,sum=0.0;
		 for (i=0;i<n;i++)
			 scanf ("%d",&str[i]);
		 sort (str,str+n);
		 for (i=1;i<n-1;i++){
		     sum+=str[i];
		 }
		 ave=sum/(n-2);
		 printf ("%.2f\n",ave);
	 }
	 return 0;
}
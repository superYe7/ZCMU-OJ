#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int T;
	scanf ("%d",&T);
	while (T--){
	    int n,i,j,count;
		scanf ("%d",&n);
		int a[100000];
		for (i=0;i<n;i++)
			scanf ("%d",&a[i]);
		count=0;
		sort (a,a+n);
		for (j=0;j<n;j++)
		{	
			if (j==0)  count++;
			else
			{
			    if (a[j]!=a[j-1])
					count++;
			}
		}
        
		printf ("%d\n",count);
		
	}
	return 0;
}
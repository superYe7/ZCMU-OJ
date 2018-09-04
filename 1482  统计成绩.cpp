#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main ()
{
    int n;
	while (scanf ("%d",&n)!=EOF){
	    int x[100],i,j;
		for (i=0;i<n;i++)
		     scanf ("%d",&x[i]);
		sort (x,x+n);
		printf ("%d %d\n",x[n-1],x[0]);
	}
return 0;
}
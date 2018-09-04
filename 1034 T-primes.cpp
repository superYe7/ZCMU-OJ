#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		long long int n;
		int i;
		scanf ("%lld",&n);
		if (n<=3) printf("NO\n");
		else 
		{
		    int m=sqrt(n);
		    if (m*m==n) 
		    {
		    	int k=sqrt(m);
		    	for (i=2;i<=k;i++)
		    	{
		    		if(m%i==0)
		    		break;
				}
				if (i>k) printf("YES\n");
				else printf("NO\n");
			}
			else printf("NO\n");
	    }
	}
	return 0;
}

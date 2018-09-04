#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,m;
	while (cin>>n>>m)
	{
		int i,j;
		for (i=0;i<n+1;i++)
		for (j=0;j<m+1;j++)
		{
			if (i==0||i==n)
			{
				if (j==0) printf("*");
				else printf (" *");
				if (j==m) printf ("\n");
			}
			else
			{
				if (j==0) printf ("* ");
				else if (j==m) printf ("*\n");
				else {
				if (j) printf("  ");
			}
			}
		}
		printf("\n");
	}
	return 0;
}

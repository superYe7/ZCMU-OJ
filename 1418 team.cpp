#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	while (cin>>n)
	{
		int a[n][n];
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<3;j++)
			cin>>a[i][j];
		}
		int cont=0,sum=0;
		for (int i=0;i<n;i++)
		{
		    cont=0;
			for (int j=0;j<3;j++)
			{
			    
				if (a[i][j]==1)
				{
					cont++;
				}
				
			}if (cont>=2)
				{
					sum++;
				}
		}
		cout<<sum<<endl;
	}
	return 0;
}

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,m;
	while (cin>>n)
	{
		int sum;
		cin>>m;
		if (n<=m)
		{
			sum=(n-1)+(m-1)*n;
		}
		else
		{
			sum=(m-1)+(n-1)*m;
		}
		cout<<sum<<endl;
	}
	return 0;
 } 

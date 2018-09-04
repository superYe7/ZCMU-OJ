#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,sum=1;
		cin>>n;
		if (n==0) 
		{
			sum=1;
		}
		else
		for (i=1;i<=n;i++)
		{
			sum+=i;
		}cout<<sum<<endl;
	}
	return 0;
}

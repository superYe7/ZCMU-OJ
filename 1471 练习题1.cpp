#include<bits/stdc++.h>
#include<algorithm>
#define maxn 1000001;
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,sum=0;
		cin>>n>>m;
		for (int i=1;i<=n;i++)
		{
			if (i%m==0) sum+=i;
		}
		cout<<sum<<endl;
	}
	return 0;
}

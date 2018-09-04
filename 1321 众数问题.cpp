#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int w[50001];
int main()
{
	int n;
	while (cin>>n)
	{
		int ans,a[n],max=0;
		memset(w,0,sizeof(w));
		for (int i=0;i<n;i++)
		{
			cin>>a[i];
			w[a[i]]++;
		}
		for (int j=0;j<50001;j++)
		{
			if (w[j]>max)
			{
				max=w[j];ans=j;
			}
		}
		cout<<ans<<endl;
		cout<<max<<endl;
	}
	return 0;
}

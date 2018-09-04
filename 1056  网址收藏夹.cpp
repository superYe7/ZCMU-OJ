#include<bits/stdc++.h>
#include<algorithm>
#define maxn 101
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,mo,me;
		cin>>n>>mo>>me;
		while(n--)
		{
			char k[maxn];
			cin>>k;
			int len=strlen(k);
			int i,j;
			int so=0,se=0,value=0,sum=0;
			for (i=0;i<len;i++)
			{
				j=k[i]-' '+32;
				sum+=j;
				if ((i+1)%2==0) se+=j;
				else so+=j;
			}
			value=(so%mo)+(se%me);
			cout<<"("<<value<<","<<sum<<")"<<endl;
		}
	}
	return 0;
}

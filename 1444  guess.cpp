#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int p,pa,pb;
		cin>>p>>pa>>pb;
		int m=p-pa;int n=p-pb;
		m=abs(m);n=abs(n);
		if (m>n) cout<<"B"<<endl;
		else if (n>m) cout<<"A"<<endl;
	}
	return 0;
}

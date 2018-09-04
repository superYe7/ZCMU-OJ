#include<bits/stdc++.h>
#include<algorithm>
#define maxn 101
using namespace std;
int main()
{
	char k[maxn];
	while (cin>>k)
	{
		int n;
		cin>>n;
		if (n<=strlen(k)-2)
		cout<<k[n+1]<<endl;
		else
		cout<<"0"<<endl;
	}
	return 0;
 } 

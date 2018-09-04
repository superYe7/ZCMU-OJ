#include<bits/stdc++.h>
#include<algorithm>
#define maxn 10001
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int cont=0,sum=1;
		while(sum<n)
		{
			sum*=2;
			cont++;
		}
		cout<<cont<<endl;
	}
	return 0;
}

#include<bits/stdc++.h>
#include<algorithm>
#define maxn 101
using namespace std;
int main()
{
	int t;float str[maxn];
	while(cin>>t)
	{
		float pj,sum=0;
		for (int i=0;i<t;i++)
		cin>>str[i];
		for (int j=0;j<t;j++)
		sum+=str[j];
		pj=sum/t;
		printf ("%.2f\n",pj);
	}
	return 0;
}

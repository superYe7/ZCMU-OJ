#include<bits/stdc++.h>
#include<algorithm>
#define maxn 101
using namespace std;
int main()
{
	int n,c;
	while(cin>>n>>c)
	{
		int w[n];
		for(int j=0;j<n;j++)
		{
		scanf("%d",&w[j]);
		} 
		sort(w,w+n);
		int i,sum=0,cont=0;
		for (i=0;i<n;i++)
		{
			sum+=w[i];
			if (sum<=c) 
			cont++;
			else
			cont+=0;
		    
		}cout<<cont<<endl;
	}
	return 0;
}

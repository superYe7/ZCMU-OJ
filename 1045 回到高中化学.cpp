#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int m,n;
	while(cin>>m>>n)
	{
		if(28*n>m) cout<<"impossible"<<endl;
		float res=0.0;
		res=1.0-(28.0*n/m);
		printf("%.2f%%\n",res*100);
	}
	return 0;
}

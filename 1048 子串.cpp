#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	char str[20]="XZCMUACMXZCMUACM";
	int len=strlen(str);
	int l,r;
	while (cin>>l>>r)
	{
		int m,n,num;
		m=l%len;
		n=r%len;
		num=(r-l);
		for (int i=m;i<=m+num;i++)
		{
			if (i%len==0) cout<<"M";
			else if (i<len) cout<<str[i-1];
			else cout<<str[i%len-1]; 
		}
		cout<<endl;
	}
	return 0;
 } 

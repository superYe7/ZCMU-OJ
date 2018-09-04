#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int n,m;
	while (~scanf ("%d%d",&n,&m)){
	    if (n==0&&m==0)
			break;
		int i,str[101];
		for (i=0;i<n;i++){
		   scanf ("%d",&str[i]);
		}
		str[n]=m;
		sort(str,str+n+1);
		for (i=0;i<=n;i++)
			printf ("%d%c",str[i],i==n?'\n':' ');
	}
	return 0;
}
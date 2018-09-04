#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define maxn 1001
int f(int n)
{
	int r=0;
	if (n==1) return r;
	else
	{
	   if (n%2==0) 
	   {
		n=n/2;r+=1;
	   }
	   else if (n%2!=0)
	   {
		int m=(3*n)+1;n=(m+1)/2;r+=1;
	   }
	}
}
int main()
{
	int n;
	while (cin>>n)
	{
		if(n==0) break;
		int r=f(n);
		cout<<r<<endl;
	}
	return 0;
 } 

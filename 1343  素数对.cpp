#include<bits/stdc++.h>
#include<algorithm>
#define maxn 33000
using namespace std;
int f(int e)
{
	int i;
	int num=sqrt(e);
	if (e==2) return 1;
	for (i=2;i<=num;i++)
	{
		if (e%i==0) break;
	}
	if (i>e/2&&e!=1)
	return 1;
	else 
	return 0;
}
int main()
{
	int n;
	while (cin>>n)
	{
		if (n==0) break;
		int i,cont=0;
		int m=n/2;
		if (f(m)==1) cont++;
		for (i=2;i<m;i++)
		{
			if(f(i)==1&&f(n-i)==1) cont++;	 
		}
		cout<<cont<<endl;
	}
	return 0;
}  

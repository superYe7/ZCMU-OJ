#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int cmb(int a,int b)
{
	return a>b;
}
int main()
{
	int n;
	while(cin>>n)
	{
		int a[n],b[n],num=0;
		for (int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n,cmb);
		int cont=0;
		b[0]=a[0];
		for (int i=1;i<n;i++)
		{
			if (a[i]!=a[i-1])
			cont++;
			b[cont]=a[i];
		}
		for(int i=0;i<n;i++)
		{
			if (a[i]==b[4])
			num++;
		}
		cout<<num<<endl;
	}
	return 0;
}

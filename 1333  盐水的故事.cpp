#include<bits/stdc++.h>
#include<algorithm>
#define maxn 5001
using namespace std;
int main()
{
	int vul,d;
	cin>>vul>>d;
	int time,sum1=0,sum2=0,cont=0;
	if (vul%d==0)
	sum1=vul/d;
	else if (vul%d!=0)
	sum1=vul/d+1;
	for (int i=1;i<vul;i++)
	{
		if (sum2<vul)
		{
		sum2+=i*d;
		cont++;
		}
	}
	time=sum1+cont-1;
	cout<<time<<endl;
	return 0;
}

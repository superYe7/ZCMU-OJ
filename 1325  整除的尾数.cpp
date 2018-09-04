#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if (a==0&&b==0) break;
		int str[100];int k,j=0;
		for (int i=0;i<100;i++)
		{
			int m=a*100+i;
			if (m%b==0)
			{
				str[j]=i;j++;   
			} 
		}
			for (k=0;k<j;k++)
			{
				if (str[k]<10) printf("0%d%c",str[k],k==j-1?'\n':' ');
				else printf("%d%c",str[k],k==j-1?'\n':' ');
			}
		
	}
	return 0;
 } 
 
 

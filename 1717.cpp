#include<bits/stdc++.h>
#include<algorithm>
#define maxn 101
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if (n==0) break;
		for (int i=0;i<n;i++)
		{
			char str[maxn];
			for (int j=0;j<maxn;j++)
			cin>>str[j];
			if(str[0]=='c'&&str[1]=='a'&&str[2]=='i'&&str[3]=='b'&&str[4]=='i')
				cout<<"C"<<endl;
			else
			{
			    int len=strlen(str);
				if(str[len-8]=='z'&&str[len-7]=='h'&&str[len-6]=='i'&&str[len-5]=='z'&&str[len-4]=='h'&&str[len-3]=='a'&&str[len-2]=='n'&&str[len-1]=='g')
				cout<<"H"<<endl;
				else
				cout<<"I do not know"<<endl;  
		    }
		}
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int i,n,str[100];
	while (~scanf ("%d",&n)){
		for (i=0;i<n;i++)
			scanf ("%d",&str[i]);
		sort(str,str+n);
		for (i=0;i<n;i++)
		{printf ("%d\n",str[n-1]);break;}
	}
	return 0;
}
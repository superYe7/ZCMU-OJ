#include<cstdio>
#include<cstring>
#include<algorithm>
#define maxn 10001;
using namespace std;
int main()
{
    int n;
	while (~scanf ("%d",&n)){
	    int a[100],b[100];
		int i,len,s,x,y;
		for (i=0;i<n;i++)
		    scanf ("%d %d",&a[i],&b[i]);	
		sort(a,a+n);
		sort(b,b+n);
		x=a[n-1]-a[0];
		y=b[n-1]-b[0];
		s=x*y;
		printf ("%d\n",s);
	}
	return 0;
}
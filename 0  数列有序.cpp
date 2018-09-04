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
        int i,str[101],temp;
        for (i=0;i<n;i++){
           scanf ("%d",&str[i]);
        }
        for (i=0;i<n;i++)
		{
		   if (str[i]>m)
		   {
		       temp=str[i];
			   str[i]=m;
			   m=temp;
		   }
		}
		str[n]=m;
        for (i=0;i<=n;i++)
            printf ("%d%c",str[i],i==n?'\n':' ');
    }
    return 0;
}

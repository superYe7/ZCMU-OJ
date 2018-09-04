#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
     int n,m;
     while (~scanf ("%d%d",&n,&m)){
        int str[n],i,a,sum=0,cnt=0;
        for (i=0;i<n;i++)
        {
           scanf ("%d",&str[i]);
        }
        sort(str,str+n);a=n-1;
        while(sum<m){
            sum+=str[a];
            cnt++;
            a--;
        }
        printf ("%d\n",cnt);
     }
     return 0;
}

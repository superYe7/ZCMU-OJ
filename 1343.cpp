#include<cstdlib> 
#include<cstdio> 
#include<cctype> 
#include<cstring>  
#include<cmath> 
#include<algorithm> 
#include<iostream> 
#define maxn 40000 
using namespace std; 
int a[maxn];
void init(void)
{
    memset(a,0,sizeof(a));
    int num=sqrt(maxn);
    int i,j;
    for(i=2;i<=num;i++)
    for(j=i*i;j<maxn;j+=i)
            a[j]=1;
}
int main() 
{ 
    init ();
    int n; 
    while(~scanf("%d",&n)) 
    { 
        if(n==0) break;
       int i,j,num=0;
       for(i=2;i<=n/2;i++)
       {if(!a[i]&&!a[n-i]) num++;}
       printf("%d\n",num);
    } 
    return 0; 
}

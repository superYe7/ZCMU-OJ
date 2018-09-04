#include<stdio.h>
const int maxn=20005;
int vis[maxn];
int ans[maxn];
void p (int k,int n){
    if (k-1==n){
        for (int i=1;i<=n;i++){
           if (i==1)printf ("%d",ans[i]);
           else printf (" %d",ans[i]);
        }
        puts("");
    }
    for (int i=1;i<=n;i++){
        if (!vis[i]){
            ans[k]=i;
            vis[i]=1;
            p(k+1,n);
            vis[i]=0;
        }
    }
}
int main ()
{
   int n;
   while (scanf ("%d",&n)!=EOF){
       p(1,n);
   }
   return 0;
}

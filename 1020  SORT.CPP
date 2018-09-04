
#include<cstdio>
#include<cstring>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int comp (const int a,const int b)
{
    return a>b;
}
int main ()
{
    int n;
    while(scanf ("%d",&n)!=EOF){
         int temp,m,str[100],i;
         for (i=0;i<n;i++)
             scanf ("%d",&str[i]);
         sort(str,str+n,comp);
         for (m=0;m<n;m++)
         {
              if (m==0)
                  printf ("%d",str[m]);
              else
                  printf (" %d",str[m]);
         }
         printf ("\n");
    }
return 0;
}
 

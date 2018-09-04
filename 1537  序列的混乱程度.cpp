#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf ("%d",&n);
        int i,str[n];
        int c;
        for (i=0;i<n;i++)
        {
            scanf("%d",&str[i]);
        }
        sort (str,str+n);
        c=str[n-1]-str[0];
        printf ("%d\n",c);
    }
    return 0;
}

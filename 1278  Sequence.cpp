#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
#define maxn 1001
int main()
{
    int n;
    while (~scanf ("%d",&n))
    {
        int str[n];
        int i;
        for (i=0;i<n;i++)
        {
            scanf ("%d",&str[i]);
        }
        sort(str,str+n);
        for (i=0;i<n-1;i++)
        {
            if (str[i]==str[i+1])
            {
                printf ("%d\n",str[i]);
                break;
            }
        }
    }
    return 0;
}

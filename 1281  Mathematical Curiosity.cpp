#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,m,s=1;
    while (~scanf ("%d%d",&n,&m)){
        if (n==0&&m==0)  break;
        int i,j,cnt=0;
        double x;
        for (i=1;i<n-1;i++)
        {
            for (j=i+1;j<n;j++)
            {
               x=1.0*(i*i+j*j+m)/(i*j);
               if (fmod(x,1)==0) cnt++;
             }
        }
        printf ("Case %d: %d\n",s,cnt);
        s++;
    }
    return 0;
}

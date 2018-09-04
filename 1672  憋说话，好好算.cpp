#include<stdio.h>
int main()
{
    int n,b,m;
    while (~scanf ("%d%d",&n,&m)){
        int w;
        w=n*m*3;
        int str[w],i;
        int b=0,cnt=0,sum=0;
        for (i=0;i<w;i++)
        {
            scanf ("%d",&str[i]);
            if (str[i]==1)
            {
                cnt++;
                b++;
            }
            else
            {
                cnt+=0;
                b++;
            }
            if (b==3)
            {
                b=0;
                if(cnt>=2)
                {sum++;}cnt=0;
            }
        }
        printf ("%d\n",sum);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int m,n,a;
    while(scanf("%d%d%d",&m,&n,&a)!=EOF)
    {
        int x,y,w,z,sum=0;
        z=(m%a);
        if(z==0)x=(m/a);
        else
        x=((m/a)+1);
 
        w=(n%a);
         if(w==0)y=(n/a);
        else
        y=((n/a)+1);
        sum=x*y;
       // printf("%d %d\n",x,y);
        printf("%d\n",sum);
    }
    return 0;
}

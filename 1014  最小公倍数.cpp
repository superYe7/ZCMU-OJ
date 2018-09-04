#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        int m,n;
        m=a;n=b;
    int w,result,t;
    if(a==0&&b==0) break;
    while(b!=0)
    {
        t=a%b;
        a=b;
        b=t;
    }
    result=a;
    w=result*(m/result)*(n/result);
    printf("%d\n",w);
    }
    return 0;
}

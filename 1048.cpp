#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include <algorithm>
#include <iostream>
using namespace std; 
#define maxn 100010
int main()
{
    char str[20]={"XZCMUACMXZCMUACM"};
    int len=strlen(str);
    int l,r;
    while(~scanf("%d%d",&l,&r))
    {
        int m,n,num;
        m=l%len;
        n=r%len;
        num=(r-l);  
        int i;
        for( i=m;i<=m+num;i++)
        {
            if(i%len==0) printf("M"); 
            else if(i<len)
            printf("%c",str[i-1]);
            else
            printf("%c",str[i%len-1]);  
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
 
int main()
{
    char str[100000];
    int k;
   while(scanf("%s%d",&str,&k)!=EOF)
   {
       int len,i,w,m=0;
       len=strlen(str);
 
       for(i=0;i<len;i++)
       {
         w=m*10+(str[i]-'0');
         m=w%k;
       }
 
       printf("%d\n",m);
   }
   return 0;
}

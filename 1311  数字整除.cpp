#include<stdio.h>
#include<string.h>
#define maxn 101
int main()
{
     char str[maxn];
	 while (~scanf ("%s",&str))
	 {
	      int len=strlen(str);
		  if (str[0]=='0')  break;
		  int i,m=0;
		  for (i=0;i<len;i++)
		  {
		       m=m*10+str[i]-'0';
			   m%=17;
		  }
		  if (m==0)  printf ("1\n");
		  else printf ("0\n");
	 }
	 return 0;
}
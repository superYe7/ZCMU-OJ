#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
     char str[255];
	 int i;
	 scanf ("%s",&str);
	 int len=strlen(str);
	 for (i=len-1;i>=0;i--)
	 {
	     if (i==0) printf ("%c\n",str[i]);
		 else
			 printf ("%c",str[i]);
	 }
	 return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
   char str[81];
   while (scanf ("%s",&str)!=EOF){
       int len=strlen(str);
	   int i;
	   for (i=0;i<len;i++)
	   {
	       if (str[i]>='a'&&str[i]<='z')
			   str[i]=str[i]-32;
	   }
	   for (i=0;i<len;i++)
	   {
		   if (i!=len-1)
		       printf ("%c",str[i]);
		   else 
			   printf ("%c\n",str[i]);
	   }
   }
return 0;
}
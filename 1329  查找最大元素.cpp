#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
	while (scanf ("%s",&str)!=EOF){
	     int len=strlen(str);
		 int i,maxn=str[0];
		 for (i=0;i<len;i++){
		      if (str[i]>maxn)
				  maxn=str[i];
		 }
		 for (i=0;i<len;i++){
		      if (i==len-1&&maxn!=str[i])
				  printf ("%c\n",str[i]);
			  else if (i==len-1&&maxn==str[i])
				  printf ("%c(max)\n",str[i]);
			  else if (maxn==str[i]&&i!=len-1)
				  printf ("%c(max)",str[i]);
			  else
				  printf ("%c",str[i]);
		 }
	}
	return 0;
}
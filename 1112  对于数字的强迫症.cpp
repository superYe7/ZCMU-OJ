#include<stdio.h>
#include<string.h>
int main()
{
    char str[2000];
	while (scanf ("%s",&str)!=EOF){
	    int len=strlen(str);
        if (str[0]=='0'&&len==1) break;
        int i=0;
		while (i<len){
		    if (str[i]==str[i+1])
				printf ("%d%d",str[i]-'0',str[i]-'0'+1);
			else
				printf ("%d",str[i]-'0');
			if (i==len-1)
				printf ("\n");
			i++;
		}
	}
	return 0;
}
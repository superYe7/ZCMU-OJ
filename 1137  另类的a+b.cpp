#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    while (scanf ("%s%s",&a,&b)!=EOF){
	    int len1=strlen(a);
		int len2=strlen(b);
		for (int i=0;i<len1+len2;i++){
		    if (i<len1) printf ("%c",a[i]);
			else 
			{
			    if (i==len1+len2-1) printf ("%c\n",b[i-len1]);
                else
					printf ("%c",b[i-len1]);
			}
		
		}
	}
	
	return 0;
}
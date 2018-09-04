#include<stdio.h>
#include<string.h>
int main ()
{
    int i,repeat;
	scanf ("%d",&repeat);
	getchar();
	for (i=0;i<repeat;i++){
	    char a[1000];
		gets(a);
		int len,j,count=0;
        len=strlen(a);
		for (j=0;j<len;j++){
			if (j==0)
			{
			   if (a[j]==' '&&a[j+1]!=' ')
				   count+=0;
			   if (a[j]!=' ')
				   count++;
			}
			else if (a[j]!=' '&&a[j-1]==' ')
				count++;			
		}
		printf ("%d\n",count);
	}
return 0;
}
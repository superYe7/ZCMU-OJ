#include<stdio.h>
#include<string.h>
int main ()
{
    int i,repeat;
	scanf ("%d",&repeat);
	for (i=0;i<repeat;i++){
	    char a[100];
		scanf ("%s",&a);
		int j,k,sum=0,num;
        num=strlen(a);
		for (j=0;j<num;j++){
		    if (a[j]>='0'&&a[j]<='9')
				sum+=a[j]-'0';
		}
		for (k=0;k<num;k++){
		    if (a[k]=='-')
				num=num-1;
		}
     printf ("number=%d,sum=%d.\n",num,sum);
	}
return 0;
}
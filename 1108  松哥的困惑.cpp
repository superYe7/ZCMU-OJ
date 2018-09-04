#include<stdio.h>
#include<string.h>
int main ()
{
    int n,i,j,l;
	while (scanf ("%d",&n)!=EOF){
		for (i=0;i<n;i++){
		    char a[20];
			scanf ("%s",&a);
			int len,count=0;
			len=strlen(a);
			for (j=0;j<len;j++){
			    if (a[j]>='A'&&a[j]<='Z') count++;
			}
			for (j=0;j<len;j++)
			{
				if (count==3)
				{
				    if (a[j]=='L'&&a[j+1]=='i') 
					{
					     for (l=0;l<len-3;l++){
					         if (a[l]=='T'&&a[l+1]=='i'&&a[l+2]=='n'&&a[l+3]=='g')
							     printf ("%s\n",a);
						  }
					}				     
				}
			}
		}
	}
	return 0;
}
#include<stdio.h>
int main()
{
    int repeat;
	scanf ("%d",&repeat);
	while (repeat--){
	    int n,m,str[100],i;
		scanf ("%d%d",&m,&n);
		str[0]=0;str[1]=1;
		int a=0;
		for (i=2;i<=50;i++){
		   str[i]=str[i-1]+str[i-2];
		}
        for (i=0;str[i]<n;i++){
			if (str[i]>=m&&str[i]<=n){
			    if (a==0) printf ("%d",str[i]);
				else printf (" %d",str[i]);
				a=1;
			}
		}
    printf ("\n");
	}
	return 0;
}
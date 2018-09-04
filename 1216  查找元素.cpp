#include<stdio.h>
int main()
{
    int i,j,n,x;
	while (~scanf ("%d%d",&n,&x)){
		int a[200];
		for (i=0;i<n;i++){
		    scanf ("%d",&a[i]);
		}
		for (i=0;i<n;i++){
			if (a[i]==x) {printf ("%d\n",i);break;}
		    else if (i==n-1)   printf ("-1\n");
		}
	}
	return 0;
}
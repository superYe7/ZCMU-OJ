#include<stdio.h>
int main ()
{
    int T;
    scanf ("%d",&T);
	while (T--){
	    int i,j,n,x;
		scanf ("%d%d",&n,&x);
        for (i=0;i<n;i++){
			for (j=0;j<n;j++){
			    printf ("%d",x);
				if (j==n-1)
					printf ("\n");
			}
			
		}
		printf ("\n");
	}
return 0;
}
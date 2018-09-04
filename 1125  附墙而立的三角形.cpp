#include<stdio.h>
int main()
{
    char str[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int n;
	while (~scanf ("%d",&n)){
	    int i,j;			
		for (i=0;i<n;i++){
			printf ("%c",str[0]); 
			int a=n-i-1;
			int b=0;
			for (j=0;j<n;j++){
			     
				 if (j<a)
				 {
					 printf (" ");
				 }
				 else
				 {
					 printf ("%c",str[b]);
					 b++;
				 }
			}
			printf ("\n");
		}
		printf ("\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
    int T;
	scanf ("%d",&T);
	while (T--){
	    int n,i,a[100];
		scanf ("%d",&n);
		for (i=0;i<n;i++){
		    scanf ("%d",&a[i]);
		}
		int temp;
		for (i=0;i<n-1;i++){
			while (a[i]!=0){
			    temp=a[i+1]%a[i];
				a[i+1]=a[i];
				a[i]=temp;
			}
		}
		printf ("%d\n",a[n-1]);
	}
	return 0;
}

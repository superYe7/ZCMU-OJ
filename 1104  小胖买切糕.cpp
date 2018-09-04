#include<stdio.h>
int main ()
{
    int a,b,c,d;
	while (scanf ("%d%d%d",&a,&b,&c)!=EOF){
	    if (a==0&&b==0&&c==0) break;
        int i;
		int	result=1;
		for (i=0;i<b;i++){
		   result*=a;
		}
		d=result%c;
		printf ("%d\n",d);
	
	}
	return 0;
}

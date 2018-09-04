#include<stdio.h>
int main()
{
    int y,k,n,a;
	while (scanf ("%d%d%d",&y,&k,&n)!=EOF){
	    a=n-y;
		int i,b=0,m=0,w=0;
		if (y>=n) printf ("-1\n");
		else
		{
			while (a>0){
				w=a+y;
				m=w%k;
				if (m==0&&b==1) printf (" %d",a);
				if (m==0&&b==0) {printf ("%d",a);b=1;}
				a--;
			}
			if (b==0) printf ("-1\n");
			
		}
		if (b==1) printf ("\n");
	}
	return 0;
}
#include<stdio.h>
int main ()
{
    int a,b,n,c;
	while (~scanf ("%d%d",&a,&b)){
	    
	if (a==0,b==0)
		break;
	c=a%b;
	while (c!=0){
	    a=b;
		b=c;
		c=a%b;		
	}
	printf ("%d\n",b);
	}
    
	return 0;
}

	

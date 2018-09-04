#include<stdio.h>
#include<math.h>
int main()
{
    int t;
	scanf ("%d",&t);
	while (t--){
	    int x,y,z,i;
		scanf ("%d%d%d",&x,&y,&z);
		if (y==0)
			printf ("0\n");
		else 
		{
			for (i=0;i<1000005;i++){
			    if (x*i>y*z)
				{
				    printf ("%d\n",i);
					break;
				}
			}
		}
	}
	return 0;
}
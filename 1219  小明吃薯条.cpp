#include<stdio.h>
int main()
{
    int T;
	scanf ("%d",&T);
	while (T--){
	    int n,m,i,count=0,sum=0;
		scanf ("%d%d",&n,&m);
        out:
		for (i=1;i<=n;i++)
		{
            
			sum+=i;
			count++;
			if (count==m) 
			{
				printf ("%d\n",sum);
				break;
			}
		}
		if (count<m) goto out;
	}
	return 0;
}
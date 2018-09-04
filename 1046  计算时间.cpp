#include<stdio.h>
int main()
{
	int a[6],b[6];
	int i,n,time;
	while(scanf("%d%d",&a[0],&b[0])!=EOF)
	{
		for (i=1;i<6;i++)
			scanf("%d%d",&a[i],&b[i]);
		time=0;
		for (i=0;i<6;i++)
		{
			if (a[i]==0||b[i]==0) time+=0;
			else if (a[i]>=1)
			{
			   n=a[i]-1;
			   time+=(n*20+b[i]);
		    }
		}
		printf("%d\n",time);
	}
	return 0;
}

#include<stdio.h>
int main()
{
    int n;
	scanf ("%d",&n);
	int str[100][100];
	int i,j,temp;
	for (i=0;i<n;i++)
	{
	   for (j=0;j<n;j++)
		   scanf ("%d",&str[i][j]);
	}
	for (i=0;i<n;i++)
	{
	    for(j=i;j<n;j++)
		{
			temp=str[i][j];
			str[i][j]=str[j][i];
			str[j][i]=temp;
		}
	}
	for (i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
		{
			if (j==n-1)
				printf ("%d\n",str[i][j]);
			else
				printf ("%d ",str[i][j]);
		}
	}
return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    int n,m;
	while (~scanf ("%d%d",&n,&m)){
	    int i,j,a=2;
		int ave=0,sum=0;
		int num1=n/m;
		int num2=n%m;
		if (num2!=0)
		{
			sum=0;
			for (i=1;i<=num1;i++)
			{
		      sum=0;
				for (j=0+m*i;j<m*(i+1);j++)
			  {
			      sum+=a;
				  a+=2;
			  }
			  ave=sum/m;
			  printf ("%d ",ave);
			}
			sum=0;
			for (i=1;i<=num2;i++)
			{
			   sum+=a;
			   a+=2;
			}
			ave=sum/num2;
			printf ("%d\n",ave);
		}
		if (num2==0)
		{
		    
			for (i=1;i<=num1;i++)
			{
			    sum=0;
				for (j=0+m*i;j<m*(i+1);j++)
				{ 
					sum+=a;
				    a+=2;
				}
				ave=sum/m;
				printf ("%d%c",ave,i==num1?'\n':' ');
			}
		}
	}
	return 0;
}
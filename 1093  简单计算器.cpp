#include<stdio.h>
#define maxn 10001;
int main()
{
    int repeat;
	scanf ("%d",&repeat);
	while (repeat--){
	    int a,b;
		int sum=0;
		char op;
		int num=0;
		scanf ("%d",&a);
		while (~scanf ("%c",&op)){
		    if (op=='=') break;
			else 
			{
			   scanf ("%d",&b);
			   num++;
			   switch(op)
			   {
			   case'+':if (num==1) sum=sum+a+b;else sum+=b;break;
			   case'-':if (num==1) sum=sum+a-b;else sum-=b;break;
			   case'*':if (num==1) sum=sum+a*b;else sum*=b;break;
			   case'/':if (num==1) sum=sum+a/b;else sum/=b;break;
			   default:break;
			   }
			}
		}
		printf ("%d\n",sum);
	}
	return 0;
}
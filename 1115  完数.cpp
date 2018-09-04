#include<stdio.h>
int main()
{
   int n;
   scanf ("%d",&n);
   while (n--){
        int num1,num2,i,j,count=0,sum;
		scanf ("%d%d",&num1,&num2);
		for (i=num1;i<=num2;i++){
			sum=0;
			for (j=1;j<i;j++){
			
				if (i%j==0) sum+=j;
			}
			if (i==sum)  count++;
		}
		printf ("%d\n",count);
   }
   return 0;
}
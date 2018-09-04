#include<stdio.h>
#include<string.h>
int main()
{
    int repeat;
	scanf ("%d",&repeat);
	while (repeat--){
		int str[1000];
		int i,j,sum=0,cont=0;
		for (i=0;i<1000;i++){
		    scanf ("%d",&str[i]);
			if (str[i]<=0)
				break;
			cont++;
			
		}
		for (j=0;j<cont;j++){
		    if (str[j]%2!=0)
				sum+=str[j];
		}
     printf ("%d\n",sum);
	}
	return 0;
}
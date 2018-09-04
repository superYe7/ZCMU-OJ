#include<stdio.h>
int main ()
{
    int t;
	char degree;
	while (scanf ("%d",&t)!=EOF){
	    if (t>=0&&t<=100)
		{    
		    if (t>=90)
		        degree='A';
	        else if (t>=80)
		        degree='B';
	        else if (t>=70)
		        degree='C';
	        else if (t>=60)
		        degree='D';
	        else if (t<=59)
		        degree='E';
		    printf ("%c\n",degree);
		}
	    else 
		    printf ("Score is error!\n");
	}
return 0;
}

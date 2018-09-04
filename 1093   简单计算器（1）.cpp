#include<stdio.h>
int main ()
{
     int T;
	 scanf ("%d",&T);
	 while (T--){
	     int x,y,i;
		 char op;
		 scanf ("%d",&x);
         op=getchar();
		 for (i=1;op!='=';i++){
		     scanf ("%d",&y);
			 switch(op)
			 {
			 case'+':x=x+y;break;
			 case'-':x=x-y;break;
			 case'*':x=x*y;break;
			 case'/':x=x/y;break;
			 }
			 op=getchar();
		 }
		 printf ("%d\n",x);
	 }
	 return 0;
}
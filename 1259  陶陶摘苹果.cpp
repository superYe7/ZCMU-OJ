#include<stdio.h>
int main()
{
   int h[10];
   int i,bh,cnt=0;
   for (i=0;i<10;i++)
	   scanf("%d",&h[i]);
   scanf ("%d",&bh);
   for (i=0;i<10;i++){
       if (h[i]<=(bh+30)) cnt++;  
   }
   printf ("%d\n",cnt);
   return 0;
}
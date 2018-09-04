#include<stdio.h>
#include<math.h>
int main()
{
   int n;
   while (scanf ("%d",&n)!=EOF){
      int i,flag,a;
      if (n==1)  flag=0;
	  else if (n==2)  flag=1;
	  else if (n==3)  flag=1;
	  else
	  {
		  a=sqrt(n);
	      for (i=2;i<=a;i++){
		      if (n%i==0) 
			  {flag=0;break;}
		      if (n%i!=0) 
			  {flag=1;}		  		  
		  }
	  }
	  if (flag==0)
			  printf ("NO\n");
	  else if (flag==1)
			  printf ("YES\n");
   }
return 0;
}
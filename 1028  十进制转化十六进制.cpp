#include<stdio.h>
#define maxn 10001
int main()
{
     int T;
	 scanf ("%d",&T);
	 while (T--){
	     int n,i=0;
		 int a[maxn],b[maxn];
		 scanf ("%d",&n);
		 while (n!=0){
		    a[i]=n/16;
			b[i]=n%16;
			n=a[i];
			i++;
		 }
		 int count=i;
		 for (i=0;i<count;i++){
		     if (b[i]==10)  b[i]='A';
			 if (b[i]==11)  b[i]='B';
			 if (b[i]==12)  b[i]='C';
			 if (b[i]==13)  b[i]='D';
			 if (b[i]==14)  b[i]='E';
			 if (b[i]==15)  b[i]='F';
		 }
		 for (i=count-1;i>=0;i--){
		     if (b[i]+'0'>='0'&&b[i]+'0'<='9')
				 printf ("%d",b[i]);
			 if (b[i]>='A'&&b[i]<='F')
				 printf ("%c",b[i]);
		 }
		 printf ("\n");
	 }
	 return 0;
}
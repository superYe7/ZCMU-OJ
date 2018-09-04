#include<stdio.h>
double z (int a);
double c (int b,int f);
double y (int d);
#define P 3.1415
int main()
{
    int T;
	scanf ("%d",&T);
	while (T--){
		int a,b,f,d;
		double Z,C,Y;
		scanf ("%d%d%d%d",&a,&b,&f,&d);
		Z=z(a);
		C=c(b,f);
		Y=y(d);
		if (Z>C&&Z>Y)  printf ("Square\n");
		else if (C>Z&&C>Y)  printf ("Rectangle\n");
		else if (Y>Z&&Y>C)  printf ("Circle\n");

	}
	return 0;
}
double z (int a)
{
    return a*a;
}
double c (int b,int f)
{
   return b*f;
}
double y (int d)
{
   return P*d*d; 
}
#include<bits/stdc++.h>
#include<algorithm>
#define maxn 31
using namespace std;
struct star{ 
    double a[7]; 
    char name[32]; 
}ss; 
int main()
{
	while(~scanf("%lf",&ss.a[0]))
	{
		for (int i=1;i<7;i++)
		scanf ("%lf",&ss.a[i]);
		getchar();
		scanf("%s",ss.name);
		double sum=0.0;
		sort(ss.a,ss.a+7);
		for (int i=1;i<6;i++)
		{
			sum+=ss.a[i];
		}
		sum=sum/5.00;
	    printf("%s",ss.name);
		printf(" %.2f\n",sum);
	}
	return 0;
 } 

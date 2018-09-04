#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int f(int n)
{
	return sqrt(n);
}
long f(long n)
{
	return sqrt(n);
}
double f(double n)
{
	return sqrt(n);
}
double sroot(double n)
{
	return f(n);
}
int main()
{
	int i=10;
    long j=1234;
    double k=7.89;
    cout<<sroot(i)<<endl;
    cout<<sroot(j)<<endl;
    cout<<sroot(k)<<endl;
    return 0;
}

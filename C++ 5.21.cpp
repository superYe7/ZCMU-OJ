#include<iostream>
using namespace std;
class ss{
	public:
		ss(int i)
		{
			m=i;
		}
		int isprime(int i);
		protected:
			int m;
}; 
int ss::isprime(int i)
{
	int k;
	for(k=2;k<m;k++)
	{
		if (m%k==0)
		return 0;
		else return 1;
	}
}
class sss:public ss{
	public:
		sss(int i=0):ss(i)
		{
		}
};
int main()
{
	int n;
	cin>>n;
	ss obj(n);
	if (obj.isprime(3))
	cout<<n<<"������"<<endl;
	else
	cout<<n<<"��������"<<endl; 
	return 0;
}

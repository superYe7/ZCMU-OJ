#include<iostream>
using namespace std;
template <class M>
class Max{
	public:
		Max(M a,M b,M c)
		{
			x=a;y=b;z=c;
		}
		M sum()
		{
			return x+y+z;
		}
		private:
			M x,y,z;
};
int main()
{
	Max <int> obj1(12,2,4);
	Max <double> obj2(2.1,3.4,6.2);
	cout<<"两个整数的和："<<obj1.sum()<<endl;
	cout<<"两个双精度的和："<<obj2.sum()<<endl;
	return 0;
}

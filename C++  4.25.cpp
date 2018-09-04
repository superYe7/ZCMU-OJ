#include<iostream>
using namespace std;
class toy{
	public:
		toy(double p,double a)
		{
			price=p;
			amount=a;
		}
		int income()
		{
			return price*amount;
		}
		private:
			double price,amount;
};
int main()
{
	toy op[3]={toy(2,6),toy(4,55),toy(12,6)};
	toy *p;
	p=&op[0];
	for (int i=0;i<3;i++)
	{
		cout<<"The income is = "<<p->income()<<endl;
		++p;
	}
	return 0;
}

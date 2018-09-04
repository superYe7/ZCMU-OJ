#include<iostream>
using namespace std;
class date{
	public:
		date(int a,string b,int c)
		{
			xh=a;
			xm=b;
			cj=c;
			count++;
			sum+=cj;
		}
		static void show();
		void print()
		{
			cout<<xh<<' '<<xm<<' '<<cj<<endl;
		}
		private:
			int xh,cj;
			string xm;
			static int count;
			static double average,sum;
}; 
int date::count=0;
double date::average=0;
double date::sum=0;
void date::show()
{
	cout<<"总人数："<<count<<endl;
	cout<<"平均分："<<sum/count<<endl;
}
int main()
{
	date a(1003,"ye",90);
	a.print();
	date b(1001,"ma",80);
	b.print();
	date::show();
	return 0;
}

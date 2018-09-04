#include<iostream>
using namespace std;
class book{
public:
    book(int q,int p)
    {
        qu=q;
        price=p;
    }
    int mul()
    {
    	return qu*price;
	}
private:
    int qu,price;
};
int main()
{
    book op[5]={book(1,10),book(2,20),book(3,30),book(4,40),book(5,50)};
    book *p;
    p=&op[4];
    for(int i=0;i<5;i++)
    {
        cout<<"qu*price= "<<p->mul()<<endl;
        --p;
    }
    return 0;
}


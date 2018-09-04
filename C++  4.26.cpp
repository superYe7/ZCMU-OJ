#include<iostream>
using namespace std;
class shang_stock;
class shen_stock{
public:
    shen_stock(int a,int b,int c)
    {
        general=a;
        st=b;
        pt=c;
    }
    friend void show(shen_stock&);
    friend void count(shen_stock& n,shang_stock& t);
private:
    int general,st,pt;
};
void show(shen_stock& d)
{
    cout<<d.general+d.st+d.pt<<endl;
}
class shang_stock{
public:
    shang_stock(int x,int y,int z)
    {
        general=x;
        st=y;
        pt=z;
    }
    friend void showdate(shang_stock&);
    friend void count(shen_stock& n,shang_stock& t);
private:
    int general,st,pt;
};
void showdate(shang_stock& t)
{
    cout<<t.general+t.st+t.pt<<endl;
}
void count(shen_stock& n,shang_stock& t)
{
    cout<<n.general+n.st+n.pt+t.general+t.st+t.pt<<endl;
}
int main()
{
    shen_stock a(1,2,3);
    shang_stock b(4,5,6);
    show(a);
    showdate(b);
    count(a,b);
    return 0;
}

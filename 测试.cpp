#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    int &i=a;
    int &j=b;
    cin>>a>>b;
    if (i>j)
        swap(i,j);
    cout<<i<<" "<<j;
    return 0;
}

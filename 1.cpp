#include<iostream>
#include<cstring>
using namespace std;
int px(int *a,int len);
int main()
{
    int a[100];
    while (cin>>a[100])
    {
        int len=strlen(a);
        for (int i=0;i<len;i++)
        {
            px(a,len);
        }
    }
    return 0;
}
int px(int *a,int len)
{
    for (i=0;i<len;i++)
    {
        for (int j=0;j<len;j++)
        {
            if (a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        for (int i=0;i<len;i++)
            cout<<a[i]<<endl;
    }
}

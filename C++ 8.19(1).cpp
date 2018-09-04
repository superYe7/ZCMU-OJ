#include<iostream>
using namespace std; 
template <class Type>
void sort(Type *arry,int size)
{
    int i,j;
    for (i=0;i<size-1;i++)
        for(j=0;j<size-i-1;j++)
    {
        if (arry[j]>arry[j+1])
        {
            int temp=arry[j];
            arry[j]=arry[j+1];
            arry[j+1]=temp;
        }
    }
    for(i=0;i<size;i++)
        cout<<arry[i]<<" ";
    cout<<endl;
}
int main()
{
    int intarry[]={12,23,14,45,33};
    double doublearry[]={12.3,34.0,44.2,45.8,23.2};
    sort(intarry,5);
    sort(doublearry,5);
    return 0;
}


#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int f(int n)
{
	if (n<=1) return n;
	else if (n>1) return f(n-1)+f(n-2); 
 } 
 int main()
 {
 	int *pi=new int[20];
 	int a=0;
 	for (int i=0;i<20;i++)
 	{
 		if (i==0) 
 		{
 			cout<<f(i);a=1;
		 }
		 if (a==1&&i>0)
		 {
		 	cout<<" "<<f(i);
		 }
	 }
	 cout<<endl;
	 delete pi;
	 return 0;
 }

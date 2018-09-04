#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    char str[100];
	while (~scanf("%s",&str)){
	    int len;
		len=strlen(str);
		int i,j,num=len;
		for (i=0;i<len;i++){
			for (j=0;j<i;j++){
			    if (str[i]==str[j])
				{
				    num--;
					break;
				}
			}
		}
		if (num%2!=0) printf ("IGNORE HIM!\n");
		else printf ("CHAT WITH HER!\n");
	}
	return 0;
}
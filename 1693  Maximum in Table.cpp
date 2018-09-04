#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n)){
        int str[n][n];
        int i,j;
        for (i=0;i<n;i++)
        {
            for (j=0;j<n;j++)
                if (i==0)
                    str[0][j]=1;
                else if(j==0)
                    str[i][j]=str[i-1][j];
                else
                    str[i][j]=str[i-1][j]+str[i][j-1];
        }
        printf ("%d\n",str[n-1][n-1]);
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[n][n],i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)printf("1");
            else printf("0");
        }
        printf("\n");
    }
}
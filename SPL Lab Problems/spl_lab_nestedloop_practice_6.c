#include<stdio.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1,k=n;k>n-i;k--,j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

}
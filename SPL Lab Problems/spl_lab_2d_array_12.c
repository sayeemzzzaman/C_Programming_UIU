#include<stdio.h>

int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int num[n1][n2],i,j;

    for(i=0;i<n1;i++)
    {
        for(j=n2-1;j>=0;j--)
        {
            scanf("%d",&num[i][j]);
        }
    }
    printf("Output: \n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }
}
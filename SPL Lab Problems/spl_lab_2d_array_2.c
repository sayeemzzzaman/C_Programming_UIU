#include<stdio.h>

int main()
{
    int n1,n2,i,j;
    scanf("%d%d",&n1,&n2);
    int num[n1][n2];
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    printf("Row-wise: ");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d ",num[i][j]);
        }
    }
    printf("\n");
    printf("Column-wise: ");
    for(j=0;j<n2;j++)
    {
        for(i=0;i<n1;i++)
        {
            printf("%d ",num[i][j]);
        }
    }

}
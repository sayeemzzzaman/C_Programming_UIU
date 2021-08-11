#include<stdio.h>

int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int num1[n1][n2],num2[n1][n2],num3[n1][n2],i,j;

    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&num1[i][j]);
        }
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&num2[i][j]);
        }
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            num3[i][j] = num1[i][j] + num2[i][j];
        }
    }
    printf("Output: \n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d ",num3[i][j]);
        }
        printf("\n");
    }

}
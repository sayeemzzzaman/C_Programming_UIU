#include<stdio.h>

int main()
{
    int num[5][5],i,j;
    printf("Enter the input matrix:\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    printf("The reversed matrix is:\n");
    for(i=4;i>=0;i--)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }

}
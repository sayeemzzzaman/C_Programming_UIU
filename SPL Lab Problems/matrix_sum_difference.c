#include<stdio.h>


int main()
{
    int i,j,n[4][4],m1[4][4],m2[4][4];
    printf("Enter matrix 1:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter matrix 2:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&m2[i][j]);
        }
        
    }
    printf("\n");
    //sum
    printf("The sum is:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",m1[i][j] + m2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //difference
    printf("The difference is:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",m1[i][j] - m2[i][j]);
        }
        printf("\n");
    }
}
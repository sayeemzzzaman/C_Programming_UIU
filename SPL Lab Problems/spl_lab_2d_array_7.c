#include<stdio.h>

int main()
{
    int num1[3][3],num2[3][3],num3[3][3],i,j;
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&num1[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&num2[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            num3[i][j]=0;
            for(int k=0;k<3;k++)
            { 
                num3[i][j] += num1[i][k] * num2[k][i];
            }
        }
    }
    printf("Output: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",num3[i][j]);
        }
        printf("\n");
    }

}
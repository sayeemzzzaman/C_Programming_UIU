#include<stdio.h>

int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int num1[n1][n2],i,j,sum=0;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&num1[i][j]);
            sum+=num1[i][j];
        }
    }
    printf("%d",sum);
}
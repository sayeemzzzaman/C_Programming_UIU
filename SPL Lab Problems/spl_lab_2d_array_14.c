#include<stdio.h>

int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int num[n1][n2],i,j,k,l,duplicate;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            duplicate = num[i][j];
            for(k=0;k<n1;k++)
            {
                for(l=0;l<n2;l++)
                {
                    if(duplicate == num[k][l])num[k][l]=-1;
                }
            }
            
        }
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }

}
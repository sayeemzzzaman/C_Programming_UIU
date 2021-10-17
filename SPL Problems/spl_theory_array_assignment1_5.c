#include<stdio.h>

int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int num[n1][n2],i,j,p,k,store;

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
            store = num[i][j];
              for(p=0;p<n1;p++)
            {
                for(k=0;k<n2;k++)
                {
                    if(store==num[p][k])
                    {
                        if((p==i && k!=j) || (i!=p))
                        {
                            num[p][k] = -1;
                        }
                    }
                }
              
            }
        }
    }
    printf("Output: \n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%2.d ",num[i][j]);
        }
        printf("\n");
    }
}
#include<stdio.h>

int main()
{
    int n,n1;
    scanf("%d%d",&n,&n1);
    int num[n][n1],i,j,max=0,loc,loc2;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&num[i][j]);
            if(max<num[i][j])
            {
                max = num[i][j];
                loc =i;
                loc2=j;
            }
        }
    }
    printf("Max: %d\nLocation: [%d][%d]",max,loc,loc2);
}
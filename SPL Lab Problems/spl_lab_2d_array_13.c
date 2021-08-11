#include<stdio.h>

int main()
{
    int n,check=0;
    scanf("%d",&n);
    int num[n][n],i,j,rev[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            rev[j][i] = num[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            
            if(rev[i][j] == num[i][j])
            {
                check++;
               
            }
            else check=0;
            
        }
    }
    
    if(check==n*n) printf("Yes");
    else printf("No");

}
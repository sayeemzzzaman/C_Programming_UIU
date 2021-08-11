#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[n][n],i,j,major[n],minor[n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&num[i][j]);
            if(i==j)major[i]= num[i][j];
        }
    }
    printf("Major diagonal: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",major[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            if(n-i-1==j)minor[i]=num[i][j]; 
           
        }
    }
    printf("Minor diagonal: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",minor[i]);
    }

   
}
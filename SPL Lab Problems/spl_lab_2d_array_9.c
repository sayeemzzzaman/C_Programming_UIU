#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[n][n],i,j,sum=0,major[n],minor[n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&num[i][j]);
            if(i==j)major[i]= num[i][j];
        }
    }
    //first line sum
    for(j=0;j<n;j++)
    {
        sum+=num[0][j];
    }
    //last line sum
    for(j=0;j<n;j++)
    {
        sum+=num[n-1][j];
    }
    //inside loop

    for(i=0;i<n-1;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            if(n-i-1==j)minor[i]=num[i][j]; 
           
        }
    }
   
    for(i=1;i<n-1;i++)
    {

        if((n-1)/2 == i)
        {
            sum = sum+major[i];
        }
        else sum = sum+ major[i]+minor[i];
        
    }
    
    printf("%d",sum);
    
}
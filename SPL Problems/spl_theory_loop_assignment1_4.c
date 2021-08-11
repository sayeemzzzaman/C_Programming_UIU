#include<stdio.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);

    
    
    printf("\n");
    for(i=1;i<=n;i++)
    {   
        if(i==1||i==n)
        { 
            for(j=1;j<=n;j++)
            {
                printf("Z");
            }
            printf("\n");
        }
        for(j=n-1;j>i;j--)
        {   
            printf(" ");
        }
      
        if(i<=n-2)
        {
            printf("Z");
            printf("\n");
        }
        
    }
    
}
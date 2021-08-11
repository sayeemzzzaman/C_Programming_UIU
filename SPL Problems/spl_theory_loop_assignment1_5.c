#include<stdio.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n/2-i+1;j>=1;j--)
        { 
            printf("_");
        }
        if(i==1||i==n)printf("$");
        else    
        {
            for(j=1,k=1;j<=3;j++,k++)
            {
                printf("$");
                if(i!=2 || i==n-1)printf("0");
                
            }
        }
        for(j=n/2-i+1;j>=1;j--)
        { 
            printf("_");
        }
        printf("\n");
    }
}
#include<stdio.h>

int main()
{
    int n,i,j,new=1,l;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("_");
        }
        for(j=i;j<=i;j++)
        {
            for(l=1;l<=2*i-1;l++)printf("*");
        }
        
        printf("\n");
    }   
}
#include<stdio.h>

int main()
{
    int n,i,j,p;
    
    scanf("%d",&n);
    p=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {   if(j==n)break;
            else printf("%d",j);
        }
        for(j=2*p-3;j>0;j--)
        {
            printf("_");
        }
        p--;
        for(j=i;j>0;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
#include<stdio.h>

int main()
{
    int i,j;

    for(i=6;i!=0;i--)
    {
        for(j=1;j<=i;j++)
        {   
            if(j%2!=0)printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");
    int k=8;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
        }
        printf("\n");
        k--;
    }
    printf("\n");
    for(i=4;i!=0;i--)
    {
        for(j=1;j<i;j++)
        {
            printf("  ");
        }
        for(j=4,k=0;j>=i;j--,k+=3)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}
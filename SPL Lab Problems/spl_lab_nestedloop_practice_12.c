#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,new=1,p,n,l,k;
    scanf("%d",&n);
    p = ceil((float)n/2);
    k = n/2;
    printf("%d\n",p);
    for(i=1;i<=p;i++)
    {
        for(j=0;j<=k-i;j++)
        {
            printf("_");
        }
        for(j=i;j<=i;j++)
        {
            for(l=1;l<=2*i-1;l++)printf("*");
        }
        
        printf("\n");
    }
    for(i=p-1;i>=1;i--)
    {
        for(j=i;j<=k;j++)
        {   if(i==1)
            printf(" ");
            else printf("_");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }printf("\n");

    }
        
}
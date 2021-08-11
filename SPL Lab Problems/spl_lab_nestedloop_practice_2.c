#include<stdio.h>


int main()
{
    int n,i,j,new=1,k;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
       
        for(j=new,k=1;k<=n;j++,k++)
        {
            printf("%d ",j);
        }
        new++;
        printf("\n");
    }
}
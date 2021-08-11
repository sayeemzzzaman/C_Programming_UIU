#include<stdio.h>


int main()
{
    int n,i,j,k=1;
    scanf("%d",&n);
    // j = n;
    
    // for(i=1;i<=n;i++)
    // {
        
    //     k = k*j;
    //     j--;
        
        
    // }
    // printf("%d! = ",n);
    // while(n!=0)
    // {
    //     printf("%d ",n);
    //     n--;
    //     if(n!=0)
    //     printf("X ");
    //     if(n==0)
    //     printf("= %d",k);
        
    // }

    for ( i = n; i!=0; i--)
    {
        k = k*i;
        printf("%d ",i);
        if(i!=1)
        printf("X ");
    }printf("= %d",k);
    
    


}
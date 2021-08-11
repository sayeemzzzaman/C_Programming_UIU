#include<stdio.h>

int main()
{
    int n,check=0;
    scanf("%d",&n);
    int num[n],i,j,search;
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    scanf("%d",&search);
    
    for(i=0;i<n;i++)
    {
        if(num[i]==search)
        {
            check++;
        }
        
    }
    if(check!=0)printf("Found at index position: ");
    for(i=0;i<n;i++)
    {
        if(num[i]==search)
        {
            printf("%d",i);
            if(i==n-1)break;
            printf(", ");
            check++;
        }
        
    }
    if(check==0)printf("NOT Found");
}
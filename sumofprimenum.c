#include<stdio.h>

int main()
{
    int first,last,count,i,k,sum=0;
    scanf("%d%d",&first,&last);
    
    for(i=first;i<=last;i++)
    {   
        count=0;
        for(k=2;k<=i/2;k++)
        { 
            if(i%k==0)
            {
                count=1;
                break;
            }
        }
        if(count==0)
        {
            if(i!=1)
            {
                printf("%d ",i);
                sum+=i;
            }
        }
    }
    printf("Sum %d",sum);

}
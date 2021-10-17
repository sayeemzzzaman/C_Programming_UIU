#include<stdio.h>

int main()
{
    int n,i,j,k,p;
    scanf("%d",&n);

    for(i=1;i<=(n/2)+1;i++) //first half
    {
        for(j=n/2-i+1;j>=1;j--)
        { 
            printf("_");
        }
        if(i==1)printf("$");
        else if(i<(n/2)+1)    
        {
            for(j=1;j<=3;j++)
            {
                printf("$");
                if(i>2)
                {    
                    for(p=1;p<=i-3+1;p++)
                    { 
                        if(i!=2 && j!=3)printf("_");
                    }
                }
            }
        }
        if(i==(n/2)+1)
        {
            for(k=1;k<=n;k++)printf("$");
        }
        for(j=n/2-i+1;j>=1;j--)
        { 
            printf("_");
        }
        if(i!=(n/2)+1)printf("\n");
    }
    for(i=(n/2)+1;i>0;i--) //second half reversed
    {
        for(j=n/2-i+1;j>=1;j--)
        { 
            printf("_");
        }
        
        if(i<(n/2)+1)    
        {
            if(i==1)printf("$");
            else
            {
                for(j=1;j<=3;j++)
            
                
                {   printf("$");
                    if(i>2)
                    {    
                        for(p=1;p<=i-3+1;p++)
                        { 
                            if(i!=2 && j!=3)printf("_");
                        }
                    }
                }
            }
            
        }
        for(j=n/2-i+1;j>=1;j--)
        { 
            printf("_");
        }
        printf("\n");
    }
}

#include<stdio.h>

int main()
{
    int n,i,j,sum=0;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            j = i* -1;
            sum+=j;
        }
       else 
       {
           sum+=i;
       }
       
   
    }printf("Result: %d",sum);
}
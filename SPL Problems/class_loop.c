#include<stdio.h>


int main()
{
    int n,i=1,sum=0;
    scanf("%d",&n);
    for(i = 1;i<=n;i++)
    {
        if(i%2==0) sum+=i*(-1);
        else sum+=i;
    }
    printf("Result: %d",sum);
}
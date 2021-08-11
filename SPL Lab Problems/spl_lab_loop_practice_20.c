#include<stdio.h>


int main()
{
    int n,i,x=1,sum=1,z;
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        x = x*10 + i;
        sum +=x;
    }
    printf("%d",sum);
}
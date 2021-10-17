#include<stdio.h>
int sum=0;
int Sum(int n)
{
    int i,sum=0,num;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num);
        sum+=num;
    }
    return sum;
}

int main()
{
    int i,n;
    scanf("%d",&n);
    printf("Sum in Function: %d",Sum(n));
}
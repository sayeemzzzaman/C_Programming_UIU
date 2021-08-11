#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num1[n],num2[n],num3[n],i,sum=0;

    for(i=0;i<n;i++)
    {
        scanf("%d",&num1[i]);
        num3[i]= num1[i]+num2[i];
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&num2[i]);
        num3[i]= num1[i]+num2[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",num3[i]);
    }
}
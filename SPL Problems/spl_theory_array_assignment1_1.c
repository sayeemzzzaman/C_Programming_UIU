#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    float array[n],sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%f",&array[i]);
        sum+=array[i];
    }
    printf("%.2f",sum/n);
}
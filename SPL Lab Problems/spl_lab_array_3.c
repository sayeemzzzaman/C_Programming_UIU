#include<stdio.h>

int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]%2==0)sum+=array[i];
    }
    printf("%d",sum);
}
#include<stdio.h>
int * MultiBy2(int num[], int n)
{
    int j;
    for(j=0;j<n;j++)
    {
        num[j]=num[j]*2;
    }
    return num;
}
int main()
{
    int n;
    scanf("%d",&n);
    int num[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    MultiBy2(num,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }
}
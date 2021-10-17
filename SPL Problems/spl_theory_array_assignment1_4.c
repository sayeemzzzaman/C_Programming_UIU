#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[n],i,j,var;

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]>num[j])
            {
                var = num[i];
                num[i] = num[j];
                num[j] = var;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }
}
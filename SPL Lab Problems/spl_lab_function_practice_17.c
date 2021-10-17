#include<stdio.h>
int Ascending(int num[], int n)
{
    int asc[n],i,j,temp;
    for(j=0;j<n;j++)
    {
        for(i=j+1;i<n;i++)
        {
            if(num[j]>num[i])
            {
                temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
    }
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
    Ascending(num,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }
}
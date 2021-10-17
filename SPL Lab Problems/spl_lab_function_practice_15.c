#include<stdio.h>
void MiniMum(int num[], int n)
{
    int min=num[0],j;
    for(j=0;j<n;j++)
    {
        if(min>num[j])
        {
            min = num[j];
        }
    }
    printf("Minimum Value: %d",min);
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
    MiniMum(num,n);
}
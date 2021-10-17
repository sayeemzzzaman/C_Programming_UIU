#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[n],i,pos;

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("position: ");
    scanf("%d",&pos);
    //printf("\n");
    for(i=0;i<n;i++)
    {
        if(pos!=i)
        {
            printf("%d ",num[i]);
        }
    }
}
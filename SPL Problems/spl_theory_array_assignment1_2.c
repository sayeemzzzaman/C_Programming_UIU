#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[n],max=0,min=0,i,index,index2=0;

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        min = num[0];
        // index2 = 0;
    }
    for(i=0;i<n;i++)
    {
        if(max<num[i])
        {
            max=num[i];
            index=i;
        }
        if(min>num[i])
        {
            min=num[i];
            index2=i;
        }
    }
    printf("Max: %d, Index: %d\nMin: %d, Index: %d",max,index,min,index2);
}
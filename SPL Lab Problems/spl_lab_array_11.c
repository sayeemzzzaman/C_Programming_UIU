#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int array1[n],array2[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    for(i=n-1,j=0;i>=0;i--,j++)
    {
        array2[i]=array1[j];
    }
    printf("Array A : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array1[i]);
    }
    printf("\n");
    printf("Array B : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array2[i]);
    }
}
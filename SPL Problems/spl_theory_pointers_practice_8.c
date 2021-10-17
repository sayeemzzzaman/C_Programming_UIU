#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,*x,i;

    printf("How many numbers? ");
    scanf("%d",&n);

    x = (int*) malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",(x+i));
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",*(x+i));
    }
}
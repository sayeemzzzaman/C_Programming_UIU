#include<stdio.h>


int main()
{
    int n,i,j,series=0,k;
    scanf("%d",&n);

    for(i=3,j=4,k=1;k<=n;i+=2,j+=3,k++)
    {
        series = series + (i*j);
    }
    printf("Result: %d\n",series);
    return 0;
}
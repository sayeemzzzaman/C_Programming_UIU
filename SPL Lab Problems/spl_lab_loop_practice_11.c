#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,j=2,series=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        series = series + pow(i,2)*j;
        j++;
    }
    printf("Result: %d",series);
}
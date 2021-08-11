#include<stdio.h>
int main()
{
    int n=4, i, j, t, k;

    for(i=0; i<=n; i++);
    {
        for(j=0; j<=4-i; j++)
        {
            printf(" ");
        }
        for(k=0; k<=i; k++)
        {
            t=k*2;
            printf("%d ", t);
        }
        printf("\n");
    }
}
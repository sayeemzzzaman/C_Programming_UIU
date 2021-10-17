#include<stdio.h>


int main()
{
    int n,i,j,k,num;
    num = 9;
    for( i=1;i<=5;i++)
    {
        for( j=i;j<5;j++)
        {
            printf(" ");
        }
        for( j=num,k=1;k<=i;k++)
        {
            printf("%d",j);
        }
        num = num-2;
        printf("\n");
    }
}
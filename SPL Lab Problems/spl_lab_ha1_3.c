#include<stdio.h>


int main()
{
    int n,i,j=2,sum=0;
    printf("How many terms? ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum + i*j;
        j = i + j;
    }
    printf("The series sum is: %d",sum);
}
#include<stdio.h>

int main()
{
    int n,rem,count=0,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(n!=0)
    {
        rem = n%10;
        sum+=rem;
        n = n/10;
        count++;
    }
    printf("The number has %d digits which sum to %d.\n",count,sum);
}
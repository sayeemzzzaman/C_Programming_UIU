#include<stdio.h>
void Factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("%d",fact);
}

int main()
{
    int n;
    scanf("%d",&n);
    Factorial(n);
}
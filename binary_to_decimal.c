#include<stdio.h>


int main()
{
    int n,i,rem,power=1,sum=0;
    printf("Enter binary number: ");
    scanf("%d",&n);

    while (n!=0)
    {
        rem = n%10;
        sum = sum + rem*power;
        power*=2;
        n/=10;
    }
    printf("Decimal value: %d\n",sum);
    
}
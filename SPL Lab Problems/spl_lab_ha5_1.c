#include<stdio.h>
int is_even(int number)
{
    if(number%2==0)printf("The number is even"); //finds divisble by 2 then its even
    else printf("The number is odd.");
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    is_even(number); //calling the even function
}
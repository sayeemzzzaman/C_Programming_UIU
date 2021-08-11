#include<stdio.h>

int main()
{
    char c;
    printf("Enter input: ");
    scanf("%c",&c);

    if((c>=65 && c <=90) || (c>=97 && c<=122))printf("The input is an alphabet.");
    else if (c>=48 && c<=57)printf("The input is a number.");
    else printf("It's a special character.");


}
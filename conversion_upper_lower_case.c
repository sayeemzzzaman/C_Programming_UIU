#include<stdio.h>

int main()
{
    char num;
    printf("Enter a letter: ");
    scanf("%c",&num);

    if(num>=65 && num <=90)
    {
        printf("%c",num+32);
    }
    else if(num>=97 && num<=122)
    {
        printf("%c",num-32);
    }
}
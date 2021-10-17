#include<stdio.h>
void Printing(char c)
{
    printf("Value received from main: %c",c);
}

int main()
{
    char c;
    scanf("%c",&c);
    Printing(c);
}
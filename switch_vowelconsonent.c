#include<stdio.h>

int main()
{
    char x;
    scanf("%c",&x);

    switch(x)
    {
        case 'A': 
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a': 
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("It's is a Vowel");
            break;

        default:
        printf("It's a consonent.");
    }
}